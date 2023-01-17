// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

void render_layer_status(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
        case TY_QWERTY:
            oled_write_ln_P(PSTR("QWERTY"), false);
            break;
        case TY_CODING:
            oled_write_ln_P(PSTR("CODING"), false);
            break;
        case TY_NUMBER:
            oled_write_ln_P(PSTR("NUMBER"), false);
            break;
        case TY_CONTROLS:
            oled_write_ln_P(PSTR("CTRL  "), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
}
