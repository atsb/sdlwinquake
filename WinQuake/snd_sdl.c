
#include <stdio.h>
#include <SDL2/SDL.h>
#include "quakedef.h"

static dma_t the_shm;
static int snd_inited;
static SDL_AudioDeviceID audio_dev_id = 0;

extern int desired_speed;
extern int desired_bits;

static void paint_audio(void* unused, Uint8* stream, int len)
{
	if (shm) {
		shm->buffer = stream;
		shm->samplepos += len / (shm->samplebits / 8) / 2;
		// Check for samplepos overflow?
		S_PaintChannels(shm->samplepos);
	}
}

qboolean SNDDMA_Init(void)
{
	SDL_AudioSpec desired, obtained;

	snd_inited = 0;

	/* Set up the desired format */
	desired.freq = desired_speed;
	switch (desired_bits) {
	case 8:
		desired.format = AUDIO_U8;
		break;
	case 16:
		if (SDL_BYTEORDER == SDL_BIG_ENDIAN)
			desired.format = AUDIO_S16MSB;
		else
			desired.format = AUDIO_S16LSB;
		break;
	default:
		Con_Printf("Unknown number of audio bits: %d\n",
			desired_bits);
		return 0;
	}
	desired.channels = 2;
	desired.samples = 512;
	desired.callback = paint_audio;

	/* Open the audio device */
	audio_dev_id = SDL_OpenAudioDevice(NULL, 0, &desired, &obtained, SDL_AUDIO_ALLOW_ANY_CHANGE);
	if (audio_dev_id == 0) {
		Con_Printf("Couldn't open SDL audio: %s\n", SDL_GetError());
		return 0;
	}

	/* Make sure we can support the audio format */
	switch (obtained.format) {
	case AUDIO_U8:
		/* Supported */
		break;
	case AUDIO_S16LSB:
	case AUDIO_S16MSB:
		if (((obtained.format == AUDIO_S16LSB) &&
			(SDL_BYTEORDER == SDL_LIL_ENDIAN)) ||
			((obtained.format == AUDIO_S16MSB) &&
				(SDL_BYTEORDER == SDL_BIG_ENDIAN))) {
			/* Supported */
			break;
		}
		/* Unsupported, fall through */;
	default:
		Con_Printf("SDL Audio: Desired format not directly supported. Will try to force.\n");
		SDL_CloseAudioDevice(audio_dev_id);
		SDL_AudioSpec obtained_fallback;
		audio_dev_id = SDL_OpenAudioDevice(NULL, 0, &desired, &obtained_fallback, 0);
		if (audio_dev_id == 0) {
			Con_Printf("Couldn't open SDL audio with forced desired format: %s\n", SDL_GetError());
			return 0;
		}
		memcpy(&obtained, &desired, sizeof(desired));
		break;
	}
	SDL_PauseAudioDevice(audio_dev_id, 0);

	/* Fill the audio DMA information block */
	shm = &the_shm;
	shm->splitbuffer = 0;
	shm->samplebits = (obtained.format & 0xFF);
	shm->speed = obtained.freq;
	shm->channels = obtained.channels;
	shm->samples = obtained.samples * shm->channels;
	shm->samplepos = 0;
	shm->submission_chunk = 1;
	shm->buffer = NULL;

	snd_inited = 1;
	return 1;
}

int SNDDMA_GetDMAPos(void)
{
	return shm->samplepos;
}

void SNDDMA_Shutdown(void)
{
	if (snd_inited)
	{
		// SDL_CloseAudio(); // SDL1
		if (audio_dev_id != 0) {
			SDL_CloseAudioDevice(audio_dev_id);
			audio_dev_id = 0;
		}
		snd_inited = 0;
	}
}

void SNDDMA_Submit(void)
{
	// stubbed
}
