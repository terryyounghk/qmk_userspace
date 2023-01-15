#include "tapdance.h"
#include "tapdance.clipboard.c"

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CUT]  = ACTION_TAP_DANCE_FN_ADVANCED(
        on_dance_cut,
        dance_cut_finished,
        dance_cut_reset
    ),
    [TD_COPY]  = ACTION_TAP_DANCE_FN_ADVANCED(
        on_dance_copy,
        dance_copy_finished,
        dance_copy_reset
    ),
    [TD_PASTE]  = ACTION_TAP_DANCE_FN_ADVANCED(
        on_dance_paste,
        dance_paste_finished,
        dance_paste_reset
    ),
};
