# Copyright 2023 Terry Young (@terryyounghk)
# SPDX-License-Identifier: GPL-3.0-or-later

AUDIO_ENABLE = yes
AUTO_SHIFT_ENABLE = no # Auto Shift
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
DYNAMIC_TAPPING_TERM_ENABLE = yes
EXTRAKEY_ENABLE = yes # Audio control and System control
MOUSEKEY_ENABLE = yes # Mouse keys


# Optional: enable this if you want cmd Z/X/C/V tap dances
TAP_DANCE_ENABLE = no


# If you are seeing this error when compiling and your keyboard is not rgbkb/sol3/rev1:
#    undefined reference to `hand_swap_config'
# then your keyboard's default firmware might not have hand_swap_config matrix defined.
# Either you explicitly define your own, or comment out the following to disable this feature.

#ifeq ($(strip $(KEYBOARD)), rgbkb/sol3/rev1)
    SWAP_HANDS_ENABLE = yes
#endif

VPATH += keyboards/gboards $(USER_PATH)/features

SRC += terryyounghk.c