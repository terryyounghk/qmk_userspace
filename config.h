// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

/*
IMPORTANT NOTE:

config.h is the only header file built alongside keymap.c generated from the json file.

Keyboard header QMK_KEYBOARD_H cannot be included in config.h because it will lead to preprocessor
conflict in the build process.

#include QMK_KEYBOARD_H
#include "quantum.h"
*/

#include "configs/my-options.h"
#include "layout.h"
#include "configs/qmk-options.h"