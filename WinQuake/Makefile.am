
bin_PROGRAMS = winquake

winquake_LDADD = @MATHLIB@ @INETLIB@ @SDL2_LIBS@

winquake_SOURCES =		\
	adivtab.h		\
	anorm_dots.h		\
	anorms.h		\
	block16.h		\
	block8.h		\
	bspfile.h		\
	cd_sdl.c		\
	cdaudio.h		\
	chase.c			\
	cl_demo.c		\
	cl_input.c		\
	cl_main.c		\
	cl_parse.c		\
	cl_tent.c		\
	clean.bat		\
	client.h		\
	cmd.c			\
	cmd.h			\
	common.c		\
	common.h		\
	conproc.h		\
	console.c		\
	console.h		\
	crc.c			\
	crc.h			\
	cvar.c			\
	cvar.h			\
	d_edge.c		\
	d_fill.c		\
	d_iface.h		\
	d_ifacea.h		\
	d_init.c		\
	d_local.h		\
	d_modech.c		\
	d_part.c		\
	d_polyse.c		\
	d_scan.c		\
	d_sky.c			\
	d_sprite.c		\
	d_surf.c		\
	d_zpoint.c		\
	draw.c			\
	draw.h			\
	host.c			\
	host_cmd.c		\
	input.h			\
	keys.c			\
	keys.h			\
	mathlib.c		\
	mathlib.h		\
	menu.c			\
	menu.h			\
	model.c			\
	model.h			\
	modelgen.h		\
	mpdosock.h		\
	net.h			\
	net_bsd.c		\
	net_bw.h		\
	net_dgrm.c		\
	net_dgrm.h		\
	net_loop.c		\
	net_loop.h		\
	net_main.c		\
	net_udp.c		\
	net_udp.h		\
	net_vcr.c		\
	net_vcr.h		\
	net_wso.c		\
	pr_cmds.c		\
	pr_comp.h		\
	pr_edict.c		\
	pr_exec.c		\
	progdefs.h		\
	progs.h			\
	protocol.h		\
	quakeasm.h		\
	quakedef.h		\
	r_aclip.c		\
	r_alias.c		\
	r_bsp.c			\
	r_draw.c		\
	r_edge.c		\
	r_efrag.c		\
	r_light.c		\
	r_local.h		\
	r_main.c		\
	r_misc.c		\
	r_part.c		\
	r_shared.h		\
	r_sky.c			\
	r_sprite.c		\
	r_surf.c		\
	r_vars.c		\
	render.h		\
	resource.h		\
	sbar.c			\
	sbar.h			\
	screen.c		\
	screen.h		\
	server.h		\
	snd_dma.c		\
	snd_mem.c		\
	snd_mix.c		\
	snd_sdl.c		\
	sound.h			\
	spritegn.h		\
	sv_main.c		\
	sv_move.c		\
	sv_phys.c		\
	sv_user.c		\
	sys.h			\
	sys_sdl.c		\
	vgamodes.h		\
	vid.h			\
	vid_sdl.c		\
	view.c			\
	view.h			\
	wad.c			\
	wad.h			\
	winquake.h		\
	world.c			\
	world.h			\
	zone.c			\
	zone.h			\
	$(MAYBE_X86_SRCS) $(NONX86_SRCS)

NONX86_SRCS =			\
	d_vars.c		\
	nonintel.c


NULL_SRCS =			\
	cd_null.c		\
	in_null.c		\
	net_none.c		\
	snd_null.c		\
	sys_null.c		\
	vid_null.c

DOS_SRCS =			\
	cd_audio.c		\
	dosasm.S		\
	dosisms.h		\
	dos_v2.c		\
	in_dos.c		\
	mplib.c			\
	mplpc.c			\
	net_bw.c		\
	net_comx.c		\
	net_dos.c		\
	net_ipx.c		\
	net_ipx.h		\
	net_ser.c		\
	net_ser.h		\
	snd_dos.c		\
	snd_gus.c		\
	sys_dos.c		\
	vid_dos.c		\
	vid_dos.h		\
	vid_ext.c		\
	vid_vga.c		\
	vregset.c		\
	vregset.h

WIN_SRCS =			\
	cd_win.c		\
	conproc.c		\
	in_win.c		\
	net_mp.c		\
	net_mp.h		\
	net_win.c		\
	net_wins.c		\
	net_wins.h		\
	net_wipx.c		\
	net_wipx.h		\
	snd_win.c		\
	sys_win.c		\
	sys_wina.S		\
	sys_wind.c		\
	vid_win.c

LNX_SRCS =			\
	cd_linux.c		\
	snd_linux.c		\
	sys_linux.c		\
	vid_svgalib.c		\
	vid_x.c

EXTRA_DIST =			\
	README.md		\
	README.SDL		\
	progdefs.q1		\
	progdefs.q2		\
	q.bat			\
	qa.bat			\
	qb.bat			\
	qe3.ico			\
	qt.bat			\
	quake-data.spec.sh	\
	quake-hipnotic.spec.sh	\
	quake-rogue.spec.sh	\
	quake-shareware.spec.sh	\
	quake.gif		\
	quake.ico		\
	quake.spec.sh		\
	winquake.aps		\
	winquake.rc		\
	wq.bat			\
	wqreadme.txt		\
	$(NULL_SRCS)		\
	$(WIN_SRCS)		\
	$(LNX_SRCS)		\
	data			\
	docs			\
	kit			
