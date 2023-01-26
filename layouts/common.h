// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

#define ___ _______

// layers

#define TY_ALPHAS          0
#define TY_NUMBERS         1
#define TY_CODING          2
#define TY_CONTROLS        3

// Mod Aliases

#define CT(k)     CTL_T(k)
#define AT(k)     ALT_T(k)
#define GT(k)     GUI_T(k)
#define ST(k)     SFT_T(k)
#define MH(k)     MEH_T(k)
#define HT(k)     HYPR_T(k)

// Home Row Mods (HRM): CAGS

#define HRML(k1,k2,k3,k4,k5)   CT(k1),AT(k2),GT(k3),ST(k4),HT(k5) // only supports basic keycode
#define HRMR(k1,k2,k3,k4,k5)   HT(k1),ST(k2),GT(k3),AT(k4),CT(k5) // only supports basic keycode

// Aliases: Special characters

#define TY_YEN          A(TY_Y)
#define TY_EURO         LSA(KC_2)
#define TY_PND          A(KC_3)
#define TY_DLR          KC_DLR

// Aliases: Media, Devices, Wireless/Bluetooth

#define TY_VDN          KC_KB_VOLUME_DOWN
#define TY_VUP          KC_KB_VOLUME_UP
#define TY_VMT          KC_KB_MUTE

// Aliases: mac specific shortcut aliases (reserved here if you want to use it)
// https://support.apple.com/en-us/HT201236

#define TY_OSSL         C(S(KC_MEDIA_EJECT)) // restart
#define TY_OSDS         C(G(KC_MEDIA_EJECT)) // display sleep
#define TY_OSMS         C(A(KC_MEDIA_EJECT)) // mac sleep
#define TY_OSLK         G(C(KC_Q)) // mac lock
#define TY_OSLO         G(S(KC_Q)) // mac logout
#define TY_OSFQ         G(A(KC_ESC)) // mac force quit app