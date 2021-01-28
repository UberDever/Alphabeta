//
// Created by uberdever on 15.08.2020.
//
#if 1
#include "scene.h"

static uint frames = 0;

void init(void)
{
}

void begin_frame(void)
{
    g_screen_fill((color){.r = 0, .g = 0, .b = 64, .a = 0});
    g_screen_buffer_clear();
}

void end_frame(void)
{
    g_screen_buffer_update();
    g_screen_present();
}

void event_handler(void)
{
}

void update(void)
{
}

void render(void)
{
    //g_screen_draw_number(5, 5, frames, COLOR(yellow));
    g_screen_draw_string(40, 40, "Alphabeta", COLOR(yellow));
    g_screen_draw_string(40, 90, "We can graphics", COLOR(golden));
    g_screen_draw_tri((v2_t){0, 495}, (v2_t){95, 295}, (v2_t){195, 495}, COLOR(red));
    g_screen_draw_quat((v2_t){205, 495}, (v2_t){205, 295}, (v2_t){395, 295}, (v2_t){395, 495}, COLOR(green));
    g_screen_draw_circle((v2_t){500, 400}, 95, COLOR(blue));
    frames++;
    if (frames > 60)
        frames = 0;
}

void clean(void)
{
}
#endif
