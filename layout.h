#pragma once

/*
IMPORTANT NOTE:

config.h is the only header file built alongside keymap.c generated from the json file.

Keyboard header QMK_KEYBOARD_H cannot be included in config.h because it will lead to preprocessor
conflict in the build process.

#include QMK_KEYBOARD_H
#include "quantum.h"
*/

/**
 * Shortcuts
 */
#define TY_UNDO	  G(KC_Z)
#define TY_CUT	  G(KC_X)
#define TY_CPY	  G(KC_C)
#define TY_PST	  G(KC_V)
#define TY_LOCK	  C(G(KC_Q))
#define TY_SLEEP  A(G(KC_PWR))
#define TY_SHUT	  C(A(G(KC_PWR)))
#define TY_SSAVE  HYPR(KC_S)

/**
 * Special symbols
 */
#define TY_YEN    A(KC_Y)
#define TY_EURO   LSA(KC_2)
#define TY_POUND  A(KC_3)
#define TY_DLR    KC_DLR

/**
 * Media, Devices, Wireless/Bluetooth (reserved)
 */
#define KC_KB_VOLUME_DOWN KC_VDN
#define KC_KB_VOLUME_UP   KC_VUP
#define TY_BT1    _______
#define TY_BT2    _______
#define TY_BT3    _______

/**
 * Mods
 */
#define CT(k)     CTL_T(k)
#define AT(k)     ALT_T(k)
#define GT(k)     GUI_T(k)
#define ST(k)     SFT_T(k)
#define MH(k)     MEH_T(k)
#define HT(k)     HYPR_T(k)

/**
 * tap dance enums
 */
#define SINGLE_TAP         1
#define SINGLE_HOLD        2
#define DOUBLE_TAP         3
#define DOUBLE_HOLD        4
#define DOUBLE_SINGLE_TAP  5
#define MORE_TAPS          6

/**
 * tap dances
 */
#define TD_CUT           0
#define TD_COPY          1
#define TD_PASTE         2
#define TD_SEMICOLON     3

#ifdef TAP_DANCE_ENABLE
    #define TY_X         TD(TD_CUT)
    #define TY_C         TD(TD_COPY)
    #define TY_V         TD(TD_PASTE)
    #define TY_SEMI      TD(TD_SEMICOLON)

#else // TAP_DANCE_ENABLE
    #define TY_X         KC_X
    #define TY_C         KC_C
    #define TY_V         KC_V
    #define TY_SEMI      KC_SEMICOLON

#endif // TAP_DANCE_ENABLE

/**
 * Home row mods (HRM)
 * CAGSH - Ctrl, Alt, Gui, Shift, Hyper
 */
#define HRML(k1,k2,k3,k4,k5)   CT(k1),AT(k2),GT(k3),ST(k4),HT(k5) // only supports basic keycodes
#define HRMR(k1,k2,k3,k4,k5)   HT(k1),ST(k2),GT(k3),AT(k4),CT(k5) // only supports basic keycodes

#define HM_A	 CT(KC_A)
#define HM_S	 AT(KC_S)
#define HM_D	 GT(KC_D)
#define HM_F	 ST(KC_F)
#define HM_J	 ST(KC_J)
#define HM_K	 GT(KC_K)
#define HM_L	 ST(KC_L)
#define HM_SEMI  TY_SEMI

/**
 * Layout and layers
 */
#define TY_QWERTY_L1           KC_Q,            KC_W,           MH(KC_E),       KC_R,           KC_T
#define TY_QWERTY_L2    HRML(  KC_A,            KC_S,           KC_D,           KC_F,           KC_G         )
#define TY_QWERTY_L3           KC_Z,            TY_X,           TY_C,           TY_V,           KC_B
#define TY_QWERTY_L4           /**/             /**/            SFT_T(KC_TAB),  LT(3, KC_SPC),  LT(2, KC_ESC)

#define TY_QWERTY_R1           KC_Y,            KC_U,           MH(KC_I),       KC_O,           KC_P
#define TY_QWERTY_R2    HRMR(  KC_H,            KC_J,           KC_K,           KC_L,           KC_SCLN      )
#define TY_QWERTY_R3           KC_N,            KC_M,           KC_COMM,        KC_DOT,         MH(KC_SLSH)
#define TY_QWERTY_R4           LT(2, KC_ENT),   LT(1, KC_SPC),  SFT_T(KC_BSPC)  /**/            /**/


#define TY_CODING_L1           KC_CIRC,         KC_AT,          KC_LPRN,        KC_RPRN,        KC_DLR
#define TY_CODING_L2    HRML(  KC_QUOT,         KC_GRV,         KC_LBRC,        KC_RBRC,        KC_PAST      )
#define TY_CODING_L3           KC_EXLM,         KC_HASH,        KC_MINS,        KC_EQL,         KC_TILD
#define TY_CODING_L4           /**/             /**/            _______,        _______,        _______

#define TY_CODING_R1           KC_HOME,         KC_PGDN,        KC_PGUP,        KC_END,         KC_CAPS
#define TY_CODING_R2    HRMR(  KC_LEFT,         KC_DOWN,        KC_UP,          KC_RGHT,        KC_BSLS      )
#define TY_CODING_R3           KC_PERC,         KC_AMPR,        _______,        _______,        _______
#define TY_CODING_R4           _______,         _______,        _______         /**/            /**/


#define TY_NUMBER_L1           KC_F1,           KC_F2,          KC_F3,          KC_F4,          KC_F5
#define TY_NUMBER_L2    HRML(  KC_1,            KC_2,           KC_3,           KC_4,           KC_5         )
#define TY_NUMBER_L3           TY_YEN,          TY_EURO,        KC_MINS,        KC_EQL,         KC_PAST
#define TY_NUMBER_L4           /**/             /**/            _______,        KC_F11,         KC_F12

#define TY_NUMBER_R1           KC_F6,           KC_F7,          KC_F8,          KC_F9,          KC_F10
#define TY_NUMBER_R2    HRMR(  KC_6,            KC_7,           KC_8,           KC_9,           KC_0         )
#define TY_NUMBER_R3           TY_POUND,        TY_DLR,         _______,        _______,        _______
#define TY_NUMBER_R4           _______,         _______,        _______         /**/            /**/


#define TY_CONTROLS_L1         RGB_TOG,         RGB_SPI,        RGB_HUI,        RGB_VAI,        TY_BT1
#define TY_CONTROLS_L2         KC_ACL0,         KC_KB_MUTE,     KC_VDN,         KC_VUP,         TY_BT3
#define TY_CONTROLS_L3         RGB_MOD,         RGB_SPD,        RGB_HUD,        RGB_VAD,        TY_BT2
#define TY_CONTROLS_L4         /**/             /**/            _______,        _______,        _______

#define TY_CONTROLS_R1         KC_BTN4,         KC_WH_L,        KC_MS_U,        KC_WH_R,        KC_BTN5
#define TY_CONTROLS_R2         KC_WH_D,         KC_MS_L,        KC_MS_D,        KC_MS_R,        KC_ACL0
#define TY_CONTROLS_R3         KC_WH_U,         KC_BTN1,        KC_BTN2,        KC_BTN3,        MH(KC_ENT)
#define TY_CONTROLS_R4         KC_BTN1,         KC_BTN2,        TO(0)           /**/            /**/


#define TY_SOL3_DEFAULT_ENCODERS \
KC_VOLD,    KC_VOLU,    KC_VOLD,    KC_VOLU,    KC_VOLD,    KC_VOLU,            KC_VOLD,    KC_VOLU,    KC_VOLD,    KC_VOLU,    KC_VOLD,    KC_VOLU, \
KC_VOLD,    KC_VOLU,    KC_MNXT,    KC_MPLY,    KC_MPRV,                                    KC_VOLD,    KC_VOLU,    KC_MNXT,    KC_MPLY,    KC_MPRV

#define TY_QWERTY 0
#define TY_QWERTY_LAYER \
        TY_QWERTY_L1,   TY_QWERTY_R1, \
        TY_QWERTY_L2,   TY_QWERTY_R2, \
        TY_QWERTY_L3,   TY_QWERTY_R3, \
        TY_QWERTY_L4,   TY_QWERTY_R4

#define TY_CODING 1
#define TY_CODING_LAYER \
        TY_CODING_L1,   TY_CODING_R1, \
        TY_CODING_L2,   TY_CODING_R2, \
        TY_CODING_L3,   TY_CODING_R3, \
        TY_CODING_L4,   TY_CODING_R4

#define TY_NUMBER 2
#define TY_NUMBER_LAYER \
        TY_NUMBER_L1,   TY_NUMBER_R1, \
        TY_NUMBER_L2,   TY_NUMBER_R2, \
        TY_NUMBER_L3,   TY_NUMBER_R3, \
        TY_NUMBER_L4,   TY_NUMBER_R4

#define TY_CONTROLS 3
#define TY_CONTROLS_LAYER \
        TY_CONTROLS_L1, TY_CONTROLS_R1, \
        TY_CONTROLS_L2, TY_CONTROLS_R2, \
        TY_CONTROLS_L3, TY_CONTROLS_R3, \
        TY_CONTROLS_L4, TY_CONTROLS_R4


/**
 * Layout conversions
 */
#define ___ _______

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

/*
        K01, K02, K03, K04, K05, K06,      K07, K08, K09, K0A, K0B, K0C, \
        K11, K12, K13, K14, K15, K16,      K17, K18, K19, K1A, K1B, K1C, \
        K21, K22, K23, K24, K25, K26,      K27, K28, K29, K2A, K2B, K2C, \
                       K31, K32, K33,      K34, K35, K36 \
*/
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
