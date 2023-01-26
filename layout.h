// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#define TY_DUAL_ROLE_THUMBS_ENABLE
// #define TY_HOME_ROW_MODS_ENABLE
// #define TY_TAP_DANCE_ENABLE

#include "layouts/common.h"

#ifdef TAP_DANCE_ENABLE
    // tap dance enums
    #define SINGLE_TAP         1
    #define SINGLE_HOLD        2
    #define DOUBLE_TAP         3
    #define DOUBLE_HOLD        4
    #define DOUBLE_SINGLE_TAP  5
    #define MORE_TAPS          6

    // tap dances
    #define TD_CUT             0
    #define TD_COPY            1
    #define TD_PASTE           2
#endif

// all base layer alpha-numeric aliases for easier editing of combos.def
    #define TY_A                KC_A
    #define TY_B                KC_B
    #define TY_C                KC_C
    #define TY_D                KC_D
    #define TY_E                KC_E
    #define TY_F                KC_F
    #define TY_G                KC_G
    #define TY_H                KC_H
    #define TY_I                KC_I
    #define TY_J                KC_J
    #define TY_K                KC_K
    #define TY_L                KC_L
    #define TY_M                KC_M
    #define TY_N                KC_N
    #define TY_O                KC_O
    #define TY_P                KC_P
    #define TY_Q                KC_Q
    #define TY_R                KC_R
    #define TY_S                KC_S
    #define TY_T                KC_T
    #define TY_U                KC_U
    #define TY_V                KC_V
    #define TY_W                KC_W
    #define TY_X                KC_X
    #define TY_Y                KC_Y
    #define TY_Z                KC_Z
    #define TY_1                KC_1
    #define TY_2                KC_2
    #define TY_3                KC_3
    #define TY_4                KC_4
    #define TY_5                KC_5
    #define TY_6                KC_6
    #define TY_7                KC_7
    #define TY_8                KC_8
    #define TY_9                KC_9
    #define TY_0                KC_0
    #define TY_F1               KC_F1
    #define TY_F2               KC_F2
    #define TY_F3               KC_F3
    #define TY_F4               KC_F4
    #define TY_F5               KC_F5
    #define TY_F6               KC_F6
    #define TY_F7               KC_F7
    #define TY_F8               KC_F8
    #define TY_F9               KC_F9
    #define TY_F10              KC_F10
    #define TY_F11              KC_F11
    #define TY_F12              KC_F12
    #define TY_SCLN             KC_SCLN
    #define TY_DOT              KC_DOT
    #define TY_COMM             KC_COMM
    #define TY_SLSH             KC_SLSH
    #define TY_TL1              KC_TAB
    #define TY_TL2              KC_SPC
    #define TY_TL3              KC_ESC
    #define TY_TR1              KC_ENT
    #define TY_TR2              KC_SPC
    #define TY_TR3              KC_BSPC

#ifdef TY_HOME_ROW_MODS_ENABLE
    #undef  TY_A
    #define TY_A            CT(KC_A)
    #undef  TY_B
    #define TY_B            MH(KC_B)
    #undef  TY_D
    #define TY_D            GT(KC_D)
    #undef  TY_F
    #define TY_F            LSFT_T(KC_F)
    #undef  TY_G
    #define TY_G            HT(KC_G)
    #undef  TY_H
    #define TY_H            HT(KC_H)
    #undef  TY_J
    #define TY_J            RSFT_T(KC_J)
    #undef  TY_K
    #define TY_K            GT(KC_K)
    #undef  TY_L
    #define TY_L            AT(KC_L)
    #undef  TY_N
    #define TY_N            MH(KC_N)
    #undef  TY_S
    #define TY_S            AT(KC_S)
    #undef  TY_1
    #define TY_1            CT(KC_1)
    #undef  TY_2
    #define TY_2            AT(KC_2)
    #undef  TY_3
    #define TY_3            GT(KC_3)
    #undef  TY_4
    #define TY_4            LSFT_T(KC_4)
    #undef  TY_5
    #define TY_5            MH(KC_5)
    #undef  TY_6
    #define TY_6            MH(KC_6)
    #undef  TY_7
    #define TY_7            RSFT_T(KC_7)
    #undef  TY_8
    #define TY_8            GT(KC_8)
    #undef  TY_9
    #define TY_9            AT(KC_9)
    #undef  TY_0
    #define TY_0            CT(KC_0)
    #undef  TY_SCLN
    #define TY_SCLN         CT(KC_SCLN)
#endif

// tap dance overrides
// #if defined TAP_DANCE_ENABLE && defined TY_TAP_DANCE_ENABLE
#ifdef TAP_DANCE_ENABLE
    #undef  TY_X
    #define TY_X        TD(TD_CUT)
    #undef  TY_C
    #define TY_C        TD(TD_COPY)
    #undef  TY_V
    #define TY_V        TD(TD_PASTE)
#endif // TAP_DANCE_ENABLE

// thumb clusters (inner-most is 1)
#ifdef TY_DUAL_ROLE_THUMBS_ENABLE
    // left hand, from innermost outwards
    #undef  TY_TCL3
    #define TY_TCL3         LT(TY_NUMBERS, KC_ESC)
    #undef  TY_TCL2
    #define TY_TCL2         ST(KC_SPC)
    #undef  TY_TCL1
    #define TY_TCL1         LT(TY_CONTROLS, KC_TAB)
    // right hand, from innermost outwards
    #undef  TY_TCR1
    #define TY_TCR1         LT(TY_NUMBERS, KC_ENT)
    #undef  TY_TCR2
    #define TY_TCR2         LT(TY_CODING, KC_SPC)
    #undef  TY_TCR3
    #define TY_TCR3         ST(KC_BSPC)
    // in other layers
    #undef  TY_F11
    #define TY_F11          ST(KC_F11)
    #undef  TY_F12
    #define TY_F12          LT(TY_CONTROLS, KC_F12)
#endif

// dynamic tapping term
#ifdef DYNAMIC_TAPPING_TERM_ENABLE
    #define TY_DTDN     DT_DOWN
    #define TY_DTUP     DT_UP
    #define TY_DTPR     DT_PRNT
#else
    #define TY_DTDN     KC_NO
    #define TY_DTUP     KC_NO
    #define TY_DTPR     KC_NO
#endif

/* ----------------------------------------------------------------------------------------------
   layout and layers
   ---------------------------------------------------------------------------------------------- */

#define TY_ALPHAS_L1           TY_Q,            TY_W,           TY_E,           TY_R,           TY_T
#define TY_ALPHAS_L2           TY_A,            TY_S,           TY_D,           TY_F,           TY_G
#define TY_ALPHAS_L3           TY_Z,            TY_X,           TY_C,           TY_V,           TY_B
#define TY_ALPHAS_L4           /**/             /**/            TY_TCL3,        TY_TCL2,        TY_TCL1

#define TY_ALPHAS_R1           TY_Y,            TY_U,           TY_I,           TY_O,           TY_P
#define TY_ALPHAS_R2           TY_H,            TY_J,           TY_K,           TY_L,           TY_SCLN
#define TY_ALPHAS_R3           TY_N,            TY_M,           TY_COMM,        TY_DOT,         TY_SLSH
#define TY_ALPHAS_R4           TY_TCR1,         TY_TCR2,        TY_TCR3         /**/            /**/


#define TY_NUMBERS_L1          KC_F1,           KC_F2,          KC_F3,          KC_F4,          KC_F5
#define TY_NUMBERS_L2          TY_1,            TY_2,           TY_3,           TY_4,           TY_5
#define TY_NUMBERS_L3          TY_YEN,          TY_EURO,        KC_MINS,        KC_EQL,         KC_PAST
#define TY_NUMBERS_L4          /**/             /**/            _______,        TY_F11,         TY_F12

#define TY_NUMBERS_R1          KC_F6,           KC_F7,          KC_F8,          KC_F9,          KC_F10
#define TY_NUMBERS_R2          TY_6,            TY_7,           TY_8,           TY_9,           TY_0
#define TY_NUMBERS_R3          TY_PND,          TY_DLR,         _______,        _______,        _______
#define TY_NUMBERS_R4          _______,         _______,        _______         /**/            /**/


#define TY_CODING_L1           KC_CIRC,         KC_AT,          KC_LPRN,        KC_RPRN,        KC_DLR
#define TY_CODING_L2    HRML(  KC_QUOT,         KC_GRV,         KC_LBRC,        KC_RBRC,        KC_PAST      )
#define TY_CODING_L3           KC_EXLM,         KC_HASH,        KC_MINS,        KC_EQL,         KC_TILD
#define TY_CODING_L4           /**/             /**/            _______,        _______,        _______

#define TY_CODING_R1           KC_HOME,         KC_PGDN,        KC_PGUP,        KC_END,         KC_CAPS
#define TY_CODING_R2    HRMR(  KC_LEFT,         KC_DOWN,        KC_UP,          KC_RGHT,        KC_BSLS      )
#define TY_CODING_R3           KC_PERC,         KC_AMPR,        _______,        _______,        _______
#define TY_CODING_R4           _______,         _______,        _______         /**/            /**/


#define TY_CONTROLS_L1         RGB_TOG,         RGB_SPI,        RGB_HUI,        RGB_VAI,        TY_VUP
#define TY_CONTROLS_L2         KC_ACL0,         RGB_SPD,        RGB_HUD,        RGB_VAD,        TY_VDN
#define TY_CONTROLS_L3         _______,         _______,        _______,        _______,        TY_VMT
#define TY_CONTROLS_L4         /**/             /**/            _______,        _______,        _______

#define TY_CONTROLS_R1         _______,         KC_BTN4,        KC_MS_U,        KC_BTN5,        _______
#define TY_CONTROLS_R2         KC_WH_D,         KC_MS_L,        KC_MS_D,        KC_MS_R,        KC_ACL0
#define TY_CONTROLS_R3         KC_WH_U,         KC_WH_L,        KC_BTN3,        KC_WH_R,        RGB_MOD
#define TY_CONTROLS_R4         KC_BTN1,         KC_BTN2,        TO(0)           /**/            /**/

#define TY_ALPHAS_LAYER \
        TY_ALPHAS_L1,   TY_ALPHAS_R1, \
        TY_ALPHAS_L2,   TY_ALPHAS_R2, \
        TY_ALPHAS_L3,   TY_ALPHAS_R3, \
        TY_ALPHAS_L4,   TY_ALPHAS_R4

#define TY_NUMBERS_LAYER \
        TY_NUMBERS_L1,  TY_NUMBERS_R1, \
        TY_NUMBERS_L2,  TY_NUMBERS_R2, \
        TY_NUMBERS_L3,  TY_NUMBERS_R3, \
        TY_NUMBERS_L4,  TY_NUMBERS_R4

#define TY_CODING_LAYER \
        TY_CODING_L1,   TY_CODING_R1, \
        TY_CODING_L2,   TY_CODING_R2, \
        TY_CODING_L3,   TY_CODING_R3, \
        TY_CODING_L4,   TY_CODING_R4

#define TY_CONTROLS_LAYER \
        TY_CONTROLS_L1, TY_CONTROLS_R1, \
        TY_CONTROLS_L2, TY_CONTROLS_R2, \
        TY_CONTROLS_L3, TY_CONTROLS_R3, \
        TY_CONTROLS_L4, TY_CONTROLS_R4


/* ----------------------------------------------------------------------------------------------
   keyboard-specific / layout conversions
   ---------------------------------------------------------------------------------------------- */

/**
 * rgbkb/sol3/rev1
 */

#define TY_SOL3_DEFAULT_ENCODERS \
KC_VOLD,    KC_VOLU,    KC_VOLD,    KC_VOLU,    KC_VOLD,    KC_VOLU,            KC_VOLD,    KC_VOLU,    KC_VOLD,    KC_VOLU,    KC_VOLD,    KC_VOLU, \
KC_VOLD,    KC_VOLU,    KC_MNXT,    KC_MPLY,    KC_MPRV,                                    KC_VOLD,    KC_VOLU,    KC_MNXT,    KC_MPLY,    KC_MPRV

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

#define LAYOUT_36key_sol3(...) LAYOUT_36key_sol3_wrapper(__VA_ARGS__)
#define LAYOUT_36key_sol3_wrapper( \
        K01, K02, K03, K04, K05,        K06, K07, K08, K09, K0A, \
        K11, K12, K13, K14, K15,        K16, K17, K18, K19, K1A, \
        K21, K22, K23, K24, K25,        K26, K27, K28, K29, K2A, \
                  K31, K32, K33,        K34, K35, K36 \
    ) \
    LAYOUT_wrapper( \
        ___,   ___,   ___,   ___,   ___,   ___,   ___,                ___,   ___,   ___,   ___,   ___,   ___,   ___,   \
        ___,   K01,   K02,   K03,   K04,   K05,   ___,                ___,   K06,   K07,   K08,   K09,   K0A,   ___,   \
        ___,   K11,   K12,   K13,   K14,   K15,   ___,                ___,   K16,   K17,   K18,   K19,   K1A,   ___,   \
        ___,   K21,   K22,   K23,   K24,   K25,   ___,                ___,   K26,   K27,   K28,   K29,   K2A,   ___,   \
        ___,   ___,   ___,   ___,   K31,   K32,   ___,   K33,  K34,   ___,   K35,   K36,   ___,   ___,   ___,   ___,   \
        TY_SOL3_DEFAULT_ENCODERS \
    )
