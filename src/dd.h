#ifndef _qed_dd_h_
#define _qed_dd_h_

/*
 * Kommunikation �ber Drag&Drop.
*/
/* 
 * Die folgenden Konstanten werden benutzt, wenn von Au�en etwas auf
 * ein Fenster von qed gezogen wird und werden bei Icon_drag als 
 * src_icon �bergeben.
 */
#define DRAGDROP_FILE	0xD01		/* Ein Dateiname in drag_filename */
#define DRAGDROP_PATH	0xD02		/* Ein Pfad in drag_filename */
#define DRAGDROP_DATA	0xD03		/* Daten in drag_data */

/* 
 * wenn drag_data_size diesen Wert hat, zeigt drag_data auf ein RING,
 * der per D&D geladen wurde!
*/
#define DDS_RINGP			-42

/*
 * Variablen f�r Drag-Operationen
*/
extern PATH	drag_filename;
extern char	*drag_data;
extern long	drag_data_size;


extern void	handle_dd	(short *msg);
/*
 * Wickelt Empfang ab.
*/

extern void	handle_avdd(short win_handle, short kstate, char *arg);
/*
 * Wickelt D&D ab, wenn glob. Fensterwechsel (VA_DRAGACCWIND) aktiv.
*/

extern void send_dd(short win_id, short m_x, short m_y, short kstate, RINGP t);
/*
 * Verschickt den Text in <t> an das Fenster <win_id>.
*/

#endif
