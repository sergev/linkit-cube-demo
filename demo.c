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
#include <stdio.h>
#include "cube.h"

int main()
{
    printf("Cube 8x8x8 Demo\n");
    gpio_init();
    gpio_ext(1);

    for (;;) {
        printf("intro\n");
        sensor_active = 0;
        effect_intro(100);

        printf("text\n");
        sensor_active = 0;
        effect_text("MIPS MEDIATEK ", 60);

        printf("fireworks\n");
        sensor_active = 0;
        effect_fireworks(20, 50);

        printf("wormsqueeze\n");
        sensor_active = 0;
        effect_wormsqueeze(2, AXIS_Z, -1, 10, 100);

        printf("sinelines\n");
        sensor_active = 0;
        effect_sinelines(20, 10);

        printf("linespin\n");
        sensor_active = 0;
        effect_linespin(15, 10);

        printf("pyramid\n");
        sensor_active = 0;
        effect_zoom_pyramid(100);

        printf("plane\n");
        sensor_active = 0;
        effect_plane(AXIS_Z, 100);
        effect_plane(AXIS_Y, 100);
        effect_plane(AXIS_X, 100);

        //printf("blinky\n");
        //sensor_active = 0;
        //effect_blinky(2, 50, 200);

        printf("boxside_randsend_parallel\n");
        sensor_active = 0;
        effect_boxside_randsend_parallel(AXIS_X, 0, 70, 1);
        effect_boxside_randsend_parallel(AXIS_X, 1, 70, 1);
        effect_boxside_randsend_parallel(AXIS_Y, 0, 70, 1);
        effect_boxside_randsend_parallel(AXIS_Y, 1, 70, 1);
        effect_boxside_randsend_parallel(AXIS_Z, 0, 70, 1);
        effect_boxside_randsend_parallel(AXIS_Z, 1, 70, 1);

        printf("axis_updown_randsuspend\n");
        sensor_active = 0;
        effect_axis_updown_randsuspend(AXIS_Z, 100, 1000, 0);
        effect_axis_updown_randsuspend(AXIS_Z, 100, 1000, 1);
        effect_axis_updown_randsuspend(AXIS_Z, 100, 1000, 0);
        effect_axis_updown_randsuspend(AXIS_Z, 100, 1000, 1);
        effect_axis_updown_randsuspend(AXIS_X, 100, 1000, 0);
        effect_axis_updown_randsuspend(AXIS_X, 100, 1000, 1);
        effect_axis_updown_randsuspend(AXIS_Y, 100, 1000, 0);
        effect_axis_updown_randsuspend(AXIS_Y, 100, 1000, 1);

        printf("mirror ripples\n");
        sensor_active = 0;
        effect_mirror_ripples(10, 100);

        printf("arrow\n");
        sensor_active = 0;
        effect_arrow_patharound(20, 100);

        //printf("random_filler\n");
        //sensor_active = 0;
        //effect_random_filler(35, 1);
        //effect_random_filler(35, 0);

        printf("rain\n");
        sensor_active = 0;
        effect_rain(10, 100);

        //printf("side ripples\n");
        //sensor_active = 0;
        //effect_side_ripples(10, 100);

        //printf("patharound\n");
        //sensor_active = 0;
        //effect_rand_patharound(20, 100);

        //printf("random sparkle\n");
        //sensor_active = 0;
        //effect_random_sparkle(20, 100);

        //printf("quad ripples\n");
        //sensor_active = 0;
        //effect_quad_ripples(10, 100);

        printf("slanted plane\n");
        sensor_active = 0;
        effect_slanted_plane(80);
        effect_slanted_plane(80);

        printf("curved plane\n");
        sensor_active = 0;
        effect_curved_plane(4, 50);

        printf("rotating balls\n");
        sensor_active = 0;
        effect_rotating_balls(50);

        printf("wavy\n");
        sensor_active = 0;
        effect_wavy_plane(6, 50);
    }
}
