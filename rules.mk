# Copyright 2023 Terry Young (@terryyounghk)
# SPDX-License-Identifier: GPL-3.0-or-later

CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = no # Auto Shift
TAP_DANCE_ENABLE = yes
DYNAMIC_TAPPING_TERM_ENABLE = yes

# ifeq ($(strip $(KEYBOARD)), crkdb/rev1)
# 	RGBLIGHT_ENABLE = no
# 	BACKLIGHT_ENABLE = no
# endif

# ifeq ($(strip $(KEYBOARD)), rgbkb/sol3/rev1)
# 	RGBLIGHT_ENABLE = no
# 	BACKLIGHT_ENABLE = no
# endif

# SPACE_CADET_ENABLE = no

VPATH += keyboards/gboards $(USER_PATH)/features

SRC += terryyounghk.c