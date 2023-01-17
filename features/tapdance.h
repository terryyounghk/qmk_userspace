// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

uint8_t dance_step(qk_tap_dance_state_t *state);
