static tap dance_state[1];

void on_dance_clipboard_wrapper(uint16_t keycode, qk_tap_dance_state_t *state, void *user_data);
void dance_clipboard_wrapper_finished(uint16_t keycode, qk_tap_dance_state_t *state, void *user_data);
void dance_clipboard_wrapper_reset(uint16_t keycode, qk_tap_dance_state_t *state, void *user_data);

void on_dance_clipboard_wrapper(uint16_t keycode, qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(keycode);
        tap_code16(keycode);
        tap_code16(keycode);
    }
    if(state->count > 3) {
        tap_code16(keycode);
    }
}

void dance_clipboard_wrapper_finished(uint16_t keycode, qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(keycode); break;
        case SINGLE_HOLD: register_code16(LGUI(keycode)); break;
        case DOUBLE_TAP: register_code16(keycode); register_code16(keycode); break;
        case DOUBLE_SINGLE_TAP: tap_code16(keycode); register_code16(keycode);
    }
}

void dance_clipboard_wrapper_reset(uint16_t keycode, qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(keycode); break;
        case SINGLE_HOLD: unregister_code16(LGUI(keycode)); break;
        case DOUBLE_TAP: unregister_code16(keycode); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(keycode); break;
    }
    dance_state[0].step = 0;
}

void on_dance_cut(qk_tap_dance_state_t *state, void *user_data);
void dance_cut_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_cut_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_cut(qk_tap_dance_state_t *state, void *user_data) {
    on_dance_clipboard_wrapper(KC_X, state, user_data);
}

void dance_cut_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_clipboard_wrapper_finished(KC_X, state, user_data);
}

void dance_cut_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_clipboard_wrapper_reset(KC_X, state, user_data);
}

void on_dance_copy(qk_tap_dance_state_t *state, void *user_data);
void dance_copy_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_copy_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_copy(qk_tap_dance_state_t *state, void *user_data) {
    on_dance_clipboard_wrapper(KC_C, state, user_data);
}

void dance_copy_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_clipboard_wrapper_finished(KC_C, state, user_data);
}

void dance_copy_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_clipboard_wrapper_reset(KC_C, state, user_data);
}

void on_dance_paste(qk_tap_dance_state_t *state, void *user_data);
void dance_paste_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_paste_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_paste(qk_tap_dance_state_t *state, void *user_data) {
    on_dance_clipboard_wrapper(KC_V, state, user_data);
}

void dance_paste_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_clipboard_wrapper_finished(KC_V, state, user_data);
}

void dance_paste_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_clipboard_wrapper_reset(KC_V, state, user_data);
}
