#ifndef _qed_kurzel_h_
#define _qed_kurzel_h_

extern bool 	goto_line_dial (void);

/* Marken */
#define MARKEN_ANZ	5

extern void 	set_marke		(short nr, char *name, PATH file, long y, short x);
extern bool 	get_marke		(short nr, char *name, PATH file, long *y, short *x);

extern void 	init_marken		(void);
extern void 	goto_marke		(short nr);
extern void 	config_marken	(TEXTP t_ptr);
extern void		del_marke 		(short nr);

/* K�rzel */
#define KURZEL_MAX	8		/* max. Anzahl der konfi. K�rzeldateien */

extern bool		krz_loaded;

extern void 	do_kurzel		(TEXTP t_ptr, bool online);
/* versucht ein K�rzel zu expandieren */

extern void		ch_kurzel		(char *name, bool force_load);
/* wechselt gem�� der lok. Optionen ggf. die K�rzeldatei */

#endif
