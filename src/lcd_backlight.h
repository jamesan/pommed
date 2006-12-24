/*
 * $Id$
 */

#ifndef __LCD_BACKLIGHT_H__
#define __LCD_BACKLIGHT_H__


struct _lcd_bck_info
{
  int level;
  int max;
};

extern struct _lcd_bck_info lcd_bck_info;


/* x1600_backlight.c */
#define X1600_BACKLIGHT_OFF       0
#define X1600_BACKLIGHT_MAX       255

void
x1600_backlight_step(int dir);

int
x1600_backlight_probe(void);

void
x1600_backlight_fix_config(void);


/* gma950_backlight.c */
#define GMA950_BACKLIGHT_MIN       0x1f
/* Beware, GMA950_BACKLIGHT_MAX is dynamic, see source */

void
gma950_backlight_step(int dir);

int
gma950_backlight_probe(void);


#endif /* !__LCD_BACKLIGHT_H__ */
