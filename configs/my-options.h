// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

/**
 * The following enables keyboard audio feedback for status changes of layers, caps lock and caps word.
 */
#define TY_AUDIO_ENABLE


/**
 * The following enables dual-role thumbs clusters.
 * i.e. tap-hold features to momentarily activate other layers.
 *
 * Keep this disabled to apply no shift/layer functions to thumb clusters.
 * Alternatively, one-shot and toggle layers are always available through combos,
 * and these combos also use thumb keys, of which if you also hold down the thumb
 * after hitting a combo, would basically be very similar to just the thumb tap-hold feeling.
 */
// #define TY_DUAL_ROLE_THUMBS_ENABLE


/**
 * The following enables Home Row Mods.
 *
 * Alternatively, Combo Mods are always available.
 *
 * To simulate successive modifier commands, you can still hold down one of the keys of a Combo Mod.
 * For example, if you wish to hit Cmd+K then Cmd+S, you can:
 *   - hold down TL2 and D (this is the combo for the Command modifier)
 *   - release D only and keep TL2 pressed down (or release TL2 only and keep D pressed down)
 *   - press and release K
 *   - press and release S
 */
// #define TY_HOME_ROW_MODS_ENABLE


/**
 * The following enables tap dances.
 *
 * These are applied to ZXCV keys so that you can just hold Z, X, C or V to perform Under, Cut, Copy
 * and Paste keyboard shortcuts.
 * Enabling this may give slight compromise of the TAPPING_TERM.
 */
// #define TY_TAP_DANCE_ENABLE
