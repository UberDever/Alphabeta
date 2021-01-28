//
// Created by uberdever on 15.08.2020.
//
#if 1
#include "scene.h"

static uint frames = 0;

void init(void) {

}

void begin_frame(void) {
    g_screen_fill((color){.r = 0, .g = 0, .b = 64, .a = 0});
    g_screen_buffer_clear();
}

void end_frame(void) {
    g_screen_buffer_update();
    g_screen_present();
}

void event_handler(void)
{

}

void update(void) {

}

void render(void) {
    g_screen_draw_number(5, 5, frames, COLOR(yellow));
    frames++;
    if (frames > 60) frames = 0;
}

void clean(void) {

}
#endif

