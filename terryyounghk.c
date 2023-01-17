// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

#include "terryyounghk.h"
#include "features/tapdance.c"

// void render_layer_status(void) {
//     // Host Keyboard Layer Status
//     oled_write_P(PSTR("Layer"), false);
//     switch (get_highest_layer(layer_state)) {
//         case _QWERTY:
//             oled_write_ln_P(PSTR("QWERTY"), false);
//             break;
//         case _CODING:
//             oled_write_ln_P(PSTR("CODING"), false);
//             break;
//         case _NUMS:
//             oled_write_ln_P(PSTR("NUMBER"), false);
//             break;
//         case _CONTROLS:
//             oled_write_ln_P(PSTR("CTRL  "), false);
//             break;
//         case _VIA0:
//             oled_write_ln_P(PSTR("VIA 0 "), false);
//             break;
//         case _VIA1:
//             oled_write_ln_P(PSTR("VIA 1 "), false);
//             break;
//         case _VIA2:
//             oled_write_ln_P(PSTR("VIA 2 "), false);
//             break;
//         case _VIA3:
//             oled_write_ln_P(PSTR("VIA 3 "), false);
//             break;
//         default:
//             oled_write_ln_P(PSTR("Undef"), false);
//     }
// }
