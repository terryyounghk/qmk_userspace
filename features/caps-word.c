// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

void caps_word_set_user(bool active) {
    #if defined AUDIO_ENABLE && defined TY_AUDIO_ENABLE
        active ?
            PLAY_SONG(TY_CAPS_WORD_ON_SONG) :
            PLAY_SONG(TY_CAPS_WORD_OFF_SONG);
    #endif
}

bool led_update_user(led_t led_state) {
    #if defined AUDIO_ENABLE && defined TY_AUDIO_ENABLE
    static uint8_t caps_state = 0;
    if (caps_state != led_state.caps_lock) {
        led_state.caps_lock ?
            PLAY_SONG(TY_CAPS_LOCK_ON_SONG) :
            PLAY_SONG(TY_CAPS_LOCK_OFF_SONG);
        caps_state = led_state.caps_lock;
    }
    #endif
    return true;
}