#ifndef MoonGFX
#define MoonGFX

#include "types.h"
struct Color {
    int r;
    int g;
    int b;
    int a;
};

long long moon_get_milliseconds();
f32 moon_get_text_width(u8* text, float scale, u8 colored);
void moon_draw_colored_text(f32 x, f32 y, const u8 *str, float scale, struct Color c);
void moon_draw_scaled_text(f32 x, f32 y, const u8 *str, float scaleX, float scaleY);
void moon_draw_text(f32 x, f32 y, const u8 *str, float scale);
void moon_draw_rectangle(f32 x, f32 y, f32 w, f32 h, struct Color c, u8 u4_3);
void moon_draw_texture(s32 x, s32 y, u32 w, u32 h, char *texture);
void moon_draw_uv_texture(s32 x, s32 y, u32 w, u32 h, u32 tw, u32 th, s32 u, s32 v, char *texture);

#endif