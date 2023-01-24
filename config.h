// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once
#include "layout.h"

/*
IMPORTANT NOTE:

config.h is the only header file built alongside keymap.c generated from the json file.

Keyboard header QMK_KEYBOARD_H cannot be included in config.h because it will lead to preprocessor
conflict in the build process.

#include QMK_KEYBOARD_H
#include "quantum.h"
*/

// No need for the single versions when multi performance isn't a problem
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#undef ENABLE_RGB_MATRIX_SPLASH
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH

// 20m timeout (20m * 60s * 1000mil)
// #define RGB_DISABLE_TIMEOUT 1200000
#define RGB_DISABLE_WHEN_USB_SUSPENDED


#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 2047

#define VIA_QMK_RGBLIGHT_ENABLE

#define STM32_ONBOARD_EEPROM_SIZE 2048

// tapping sensitivity tweaked for home row mods
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD
// #define RETRO_TAPPING

// combos
#ifdef COMBO_ENABLE
    #define COMBO_VARIABLE_LEN
    #define COMBO_ONLY_FROM_LAYER 0  // base layer
    #define COMBO_TERM 35
#endif

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD

// Caps
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// Auto Shift
// #define NO_AUTO_SHIFT_TAB
// #define NO_AUTO_SHIFT_ALPHA
// #define AUTO_SHIFT_TIMEOUT TAPPING_TERM
// #define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#define MOUSEKEY_DELAY              0
#define MOUSEKEY_INTERVAL           12
#define MOUSEKEY_WHEEL_DELAY        0
#define MOUSEKEY_MAX_SPEED          4
#define MOUSEKEY_TIME_TO_MAX        40
#define MOUSEKEY_WHEEL_INTERVAL     120
#define MOUSEKEY_WHEEL_MAX_SPEED    8
#define MOUSEKEY_WHEEL_TIME_TO_MAX  4
