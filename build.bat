gcc  -g -O2 -ffast-math -funroll-loops -fomit-frame-pointer -D_GNU_SOURCE=1 -D_THREAD_SAFE -o sdlquake cd_sdl.o chase.o cl_demo.o cl_input.o cl_main.o cl_parse.o cl_tent.o cmd.o common.o console.o crc.o cvar.o d_edge.o d_fill.o d_init.o d_modech.o d_part.o d_polyse.o d_scan.o d_sky.o d_sprite.o d_surf.o d_zpoint.o draw.o host.o host_cmd.o keys.o mathlib.o menu.o model.o net_bsd.o net_dgrm.o net_loop.o net_main.o net_udp.o net_vcr.o net_wso.o pr_cmds.o pr_edict.o pr_exec.o r_aclip.o r_alias.o r_bsp.o r_draw.o r_edge.o r_efrag.o r_light.o r_main.o r_misc.o r_part.o r_sky.o r_sprite.o r_surf.o r_vars.o sbar.o screen.o snd_dma.o snd_mem.o snd_mix.o snd_sdl.o sv_main.o sv_move.o sv_phys.o sv_user.o sys_sdl.o vid_sdl.o view.o wad.o world.o zone.o  d_vars.o nonintel.o -lm -lSDLmain -lSDL -mwindows -lmingw32 -lwsock32