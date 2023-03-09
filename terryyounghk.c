// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"

#ifdef COMBO_ENABLE
#include "g/keymap_combo.h"
#endif

#if defined AUDIO_ENABLE && defined TY_AUDIO_ENABLE
#include "features/audio.c"
#include "features/caps-word.c"
#endif

#ifdef TAP_DANCE_ENABLE
#include "features/tapdance.c"
#endif

#ifdef SWAP_HANDS_ENABLE
#include "features/hand-swap.c"
#endif

// #include "features/oled.c"

layer_state_t layer_state_set_user(layer_state_t state) {
    #if defined AUDIO_ENABLE && defined TY_AUDIO_ENABLE
        stop_all_notes();
        switch (get_highest_layer(state)) {
            case TY_ALPHAS:   PLAY_SONG(TY_ALPHAS_SONG);   break;
            case TY_NUMBERS:  PLAY_SONG(TY_NUMBERS_SONG);  break;
            case TY_CODING:   PLAY_SONG(TY_CODING_SONG);   break;
            case TY_CONTROLS: PLAY_SONG(TY_CONTROLS_SONG); break;
        }
    #endif

    return state;
}

void oneshot_mods_changed_user(uint8_t mods) {
    #if defined AUDIO_ENABLE && defined TY_AUDIO_ENABLE
    stop_all_notes();
    mods ?
        PLAY_SONG(TY_OSM_ON_SONG) :
        PLAY_SONG(TY_OSM_OFF_SONG);
    #endif
}
