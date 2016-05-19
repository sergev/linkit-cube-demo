/*
 * Collection of demos for LED cube 8x8x8
 *
 * Copyright (C) 2016 Serge Vakulenko <serge.vakulenko@gmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * GPIO interface to the LED cube 8x8x8.
 */
#define CUBE_SIZE 8

void gpio_init(void);
void gpio_ext(int on);
void gpio_oe(int active);
void gpio_le(int active);
void gpio_backlight_upper(int on);
void gpio_backlight_lower(int on);
void gpio_layer(int z);
void gpio_plane(unsigned char *data);
int gpio_sensor(void);

/*
 * Demo data and routines.
 */
#define AXIS_X 1
#define AXIS_Y 2
#define AXIS_Z 3

/*
 * Bit image of the cube.
 */
extern unsigned char cube[8][8];

/*
 * State of the input sensor.
 */
extern int sensor_active;

/*
 * Drawing primitives.
 */
void delay_ms(unsigned msec);
void setvoxel(int x, int y, int z);
void clrvoxel(int x, int y, int z);
int getvoxel(int x, int y, int z);
void altervoxel(int x, int y, int z, int state);
void setplane(char axis, int i);
void clrplane(char axis, int i);
void fill(int pattern);
void box_filled(int x1, int y1, int z1, int x2, int y2, int z2);
void box_walls(int x1, int y1, int z1, int x2, int y2, int z2);
void box_wireframe(int x1, int y1, int z1, int x2, int y2, int z2);
void line(int x1, int y1, int z1, int x2, int y2, int z2, int state);
void shift(char axis, int direction);

/*
 * Animations.
 */
void effect_fireworks(int seconds, int delay);
void effect_quad_ripples(int seconds, int delay);
void effect_int_ripples(int seconds, int delay);
void effect_side_ripples(int seconds, int delay);
void effect_mirror_ripples(int seconds, int delay);
void effect_wormsqueeze(int size, int axis, int direction, int iterations, int delay);
void effect_sinelines(int seconds, int delay);
void effect_linespin(int seconds, int delay);
void effect_boxside_randsend_parallel(char axis, int origin, int delay, int mode);
void effect_axis_updown_randsuspend(char axis, int delay, int sleep, int invert);
void effect_rain(int seconds, int delay);
void effect_random_filler(int delay, int state);
void effect_blinky(int repeat, int mindelay, int maxdelay);
void effect_plane(int plane, int delay);
void effect_slanted_plane(int delay);
void effect_text(char *string, int delay);
void effect_zoom_pyramid(int delay);
void effect_intro(int delay);
void effect_rand_patharound(int seconds, int delay);
void effect_arrow_patharound(int seconds, int delay);
void effect_curved_plane(int seconds, int delay);
void effect_rotating_balls(int delay);
void effect_wavy_plane(int seconds, int delay);
