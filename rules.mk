# Copyright 2023 Terry Young (@terryyounghk)
# SPDX-License-Identifier: GPL-3.0-or-later

# VIA_ENABLE = no
# CONSOLE_ENABLE = no
# COMMAND_ENABLE = no
# COMBO_ENABLE = yes
MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = no # Auto Shift
TAP_DANCE_ENABLE = yes

# ifeq ($(strip $(KEYBOARD)), crkdb/rev1)
# 	RGBLIGHT_ENABLE = no
# 	BACKLIGHT_ENABLE = no
# endif

# ifeq ($(strip $(KEYBOARD)), rgbkb/sol3/rev1)
# 	RGBLIGHT_ENABLE = no
# 	BACKLIGHT_ENABLE = no
# endif

# SPACE_CADET_ENABLE = no

VPATH += $(USER_PATH)/tapdance

# INTROSPECTION_KEYMAP_C = terryyounghk.c # keymaps

SRC += terryyounghk.c