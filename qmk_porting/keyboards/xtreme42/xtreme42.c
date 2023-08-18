/*
Copyright 2022 Huckies <https://github.com/Huckies>
Copyright 2023 OctopusZ <https://github.com/OctopusZ>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
/* clang-format off */
led_config_t g_led_config = { {
  // 轴灯对应的灯的序号
    {  0,  1,  2,  3,      4,      5,  6,       7,  8,  9, 10,    11 }, 
    { 22, 21, 20, 19,     18,     17,  16,     15, 14, 13, 12, NO_LED}, 
    { 23, 24, 25, 26,     27,     28,  29,     30, 31, 32, 33, NO_LED}, 
    { 41, 40, 39, 38, NO_LED, NO_LED,  37, NO_LED, 36, 35, 34, NO_LED}  
}, {
  // 所有RGB的物理位置
  //       0             1           2            3               4           5            6               7             8              9          10          11
/*0*/  { 0,  0 },  { 24,   0 }, { 41,   0 }, { 61,   0 }, {  81,   0 }, {  103,    0 }, { 124,    0 }, { 142,    0 }, { 162,    0 }, { 183,    0 } ,{ 203,   0 } ,{ 224,  0 },
/*1*/  { 4,  21 }, { 27,  21 }, { 45,  21 }, { 67,  21 }, {  86,  21 }, {  106,   21 }, { 128,   21 }, { 146,   21 }, { 166,   21 }, { 187,   21 } ,{ 217,  21 },
/*2*/  { 8,  43 }, { 33,  43 }, { 52,  43 }, { 73,  43 }, {  93,  43 }, {  114,   43 }, { 134,   43 }, { 155,   43 }, { 175,   43 }, { 196,   43 } ,{ 200,  43 },
/*3*/  { 4,  64 }, { 27,  64 }, { 46,  64 }, { 79,  64 },                               { 130,   64 },                { 172,   64 }, { 196,   64 } ,{ 200,  64 }
}, {
  // 所有RGB的标记（FLAG）
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4,       4,    4, 4, 4, 4
} };


/* clang-format on */
void rgb_matrix_indicators_kb(void) {
    HSV hsv = {0, 255, rgb_matrix_get_val()};
    RGB rgb = hsv_to_rgb(hsv);
    switch(biton32(layer_state)) {
        case 1: rgb_matrix_set_color(1, rgb.r, rgb.g, rgb.b); break;
        case 2: rgb_matrix_set_color(2, rgb.r, rgb.g, rgb.b); break;
        case 3: rgb_matrix_set_color(3, rgb.r, rgb.g, rgb.b); break;
        case 4: rgb_matrix_set_color(4, rgb.r, rgb.g, rgb.b); break;
        case 5: rgb_matrix_set_color(5, rgb.r, rgb.g, rgb.b); break;
        case 6: rgb_matrix_set_color(6, rgb.r, rgb.g, rgb.b); break;
        default: break;
    }
}

#endif


int main()
{
    extern void protocol_setup();
    extern void protocol_init();
    extern void protocol_task();

    platform_setup();

    protocol_setup();
#if !defined ESB_ENABLE || ESB_ENABLE != 2
    keyboard_setup();
#endif

    protocol_init();

    /* Main loop */
    for (;;) {
        protocol_task();
        //! housekeeping_task() is handled by platform
    }
}
