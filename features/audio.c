// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

#if defined AUDIO_ENABLE && defined TY_AUDIO_ENABLE

    #define TY_1_NOTE_SOUND   Q__NOTE(_C5)
    #define TY_2_NOTE_SOUND   E__NOTE(_C5), Q__NOTE(_E5)
    #define TY_3_NOTE_SOUND   E__NOTE(_C5), E__NOTE(_E5), Q__NOTE(_G5)
    #define TY_4_NOTE_SOUND   E__NOTE(_C5), E__NOTE(_E5), E__NOTE(_G5), Q__NOTE(_C6)

    #define TY_ALPHAS_SOUND   TY_1_NOTE_SOUND
    #define TY_NUMBERS_SOUND  TY_2_NOTE_SOUND
    #define TY_CODING_SOUND   TY_3_NOTE_SOUND
    #define TY_CONTROLS_SOUND TY_4_NOTE_SOUND

    float TY_ALPHAS_SONG   [][2] = SONG(TY_ALPHAS_SOUND);
    float TY_NUMBERS_SONG  [][2] = SONG(TY_NUMBERS_SOUND);
    float TY_CODING_SONG   [][2] = SONG(TY_CODING_SOUND);
    float TY_CONTROLS_SONG [][2] = SONG(TY_CONTROLS_SOUND);

    float TY_CAPS_WORD_ON_SONG  [][2] = SONG(SCROLL_LOCK_ON_SOUND);
    float TY_CAPS_WORD_OFF_SONG [][2] = SONG(SCROLL_LOCK_OFF_SOUND);
    float TY_CAPS_LOCK_ON_SONG  [][2] = SONG(CAPS_LOCK_ON_SOUND);
    float TY_CAPS_LOCK_OFF_SONG [][2] = SONG(CAPS_LOCK_OFF_SOUND);

#endif
