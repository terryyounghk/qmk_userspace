// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

#if defined AUDIO_ENABLE && defined TY_AUDIO_ENABLE

    #define TY_ALPHAS_SOUND         E__NOTE(_C6), E__NOTE(_C6), E__NOTE(_C6)
    #define TY_NUMBERS_SOUND        E__NOTE(_E6), E__NOTE(_E6), E__NOTE(_E6)
    #define TY_CODING_SOUND         E__NOTE(_G6), E__NOTE(_G6), E__NOTE(_G6)
    #define TY_CONTROLS_SOUND       E__NOTE(_C7), E__NOTE(_C7), E__NOTE(_C7)

    #define TY_CAPS_LOCK_ON_SOUND   E__NOTE(_G5), E__NOTE(_G5), E__NOTE(_G5)
    #define TY_CAPS_LOCK_OFF_SOUND  E__NOTE(_C5), E__NOTE(_C5)
    #define TY_CAPS_WORD_ON_SOUND   E__NOTE(_C6), E__NOTE(_E6), E__NOTE(_G6), E__NOTE(_C7)
    #define TY_CAPS_WORD_OFF_SOUND  E__NOTE(_C7), E__NOTE(_G6), E__NOTE(_E6), E__NOTE(_C6)

    float TY_ALPHAS_SONG   [][2] = SONG(TY_ALPHAS_SOUND);
    float TY_NUMBERS_SONG  [][2] = SONG(TY_NUMBERS_SOUND);
    float TY_CODING_SONG   [][2] = SONG(TY_CODING_SOUND);
    float TY_CONTROLS_SONG [][2] = SONG(TY_CONTROLS_SOUND);

    float TY_CAPS_WORD_ON_SONG  [][2] = SONG(TY_CAPS_WORD_ON_SOUND);
    float TY_CAPS_WORD_OFF_SONG [][2] = SONG(TY_CAPS_WORD_OFF_SOUND);
    float TY_CAPS_LOCK_ON_SONG  [][2] = SONG(TY_CAPS_LOCK_ON_SOUND);
    float TY_CAPS_LOCK_OFF_SONG [][2] = SONG(TY_CAPS_LOCK_OFF_SOUND);

#endif
