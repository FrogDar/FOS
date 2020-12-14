#ifndef _ORANGES_CONSOLE_H_
#define _ORANGES_CONSOLE_H_

/* CONSOLE */
typedef struct s_console
{
	unsigned int	crtc_start; /*����CRTC������ַ*/
	unsigned int	orig;	    /*��������̨�ĵ�ַ*/
	unsigned int	con_size;   /*����̨��С*/
	unsigned int	cursor;
	int		is_full;
}CONSOLE;


#define SCR_UP	1	/*���Ϲ���*/
#define SCR_DN	-1	/*���¹���*/

#define SCR_SIZE (80 * 25)
#define SCR_WIDTH 80

#define DEFAULT_CHAR_COLOR	(MAKE_COLOR(BLACK, WHITE))
#define GRAY_CHAR (MAKE_COLOR(BLACK, BLACK) | BRIGHT)
#define RED_CHAR  (MAKE_COLOR(BLUE, RED) | BRIGHT)

#endif /* _ORANGES_CONSOLE_H_ */
