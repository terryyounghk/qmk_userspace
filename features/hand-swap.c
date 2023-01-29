// Copyright 2023 Terry Young (@terryyounghk)
// SPDX-License-Identifier: GPL-3.0-or-later

// QMK reference: https://docs.qmk.fm/#/how_a_matrix_work

#if defined KEYBOARD_rgbkb_sol3_rev1 && defined SWAP_HANDS_ENABLE
    /*

    CAUTION !!!
    EXPERIMENTAL !!!

    Runtime hand swap states are not persistent upon re-plugging the keyboard.

    This is a very specific hand swap config logic for my rgbkb sol3 keyboard.
    - all keys on the board are mirrored
    - the internal encoders are unchanged (i.e. all blank slots in the diagram below)

    The rationale is to mirror the same muscle memory of combos to the other hand.

    One obvious caveat is the nav keys on the "coding layer" would be reversed in terms of
    position/direction, but that is not my use case; keyboard shortcuts and combos are my use cases.

    The original matrix of rgbkb sol3 is rev1.h at the time of this writing:
    https://github.com/qmk/qmk_firmware/blob/981f3c316cb1619aef554fbb2913c8d1b03b0d08/keyboards/rgbkb/sol3/rev1/rev1.h

    The resulting swap is as follows (mr = mirrored, empty = unchanged):

        67890    12345   <---- NO
        YUIOP    QWERT   <---- NO

        09876    54321   <---- YES
        POIUY    TREWQ   <---- YES

    ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐  ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
    │  mr  │  0   │  9   │  8   │  7   │  6   │  mr  │  │  mr  │  5   │  4   │  3   │  2   │  1   │  mr  │
    ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
    │  mr  │  P   │  O   │  I   │  U   │  Y   │  mr  │  │  mr  │  T   │  R   │  E   │  W   │  Q   │  mr  │
    ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
    │  mr  │  ;   │  L   │  K   │  J   │  H   │  mr  │  │  mr  │  G   │  F   │  D   │  S   │  A   │  mr  │
    ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
    │  mr  │  /   │  .   │  ,   │  M   │  N   │  mr  │  │  mr  │  B   │  V   │  C   │  X   │  Z   │  mr  │
    ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
    │  mr  │  mr  │  mr  │  mr  │  mr  │      │  mr  │  │  mr  │      │  mr  │  mr  │  mr  │  mr  │  mr  │
    └──────┴──────┴──────┴──────┴──────┤  mr  ├──────┤  ├──────┤  mr  ├──────┴──────┴──────┴──────┴──────┘
                                       │      │  mr  │  │  mr  │      │
                                       └──────┴──────┘  └──────┴──────┘
    ┌──────┬──────┬──────┬──────┬──────┬──────┐                ┌──────┬──────┬──────┬──────┬──────┬──────┐
    │      │      │      │      │      │      │                │      │      │      │      │      │      │
    └──────┴──────┴──────┴──────┴──────┴──────┘                └──────┴──────┴──────┴──────┴──────┴──────┘
    ┌──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┐
    │      │      │      │      │      │                              │      │      │      │      │      │
    └──────┴──────┴──────┴──────┴──────┘                              └──────┴──────┴──────┴──────┴──────┘

    */

    const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {

        /* Left hand, matrix positions

                --- outermost column          --- alphanumeric            --- innermost column    --- touch encoders unchanged
               /               ______________|______________             |                       /
              /               /                              \           |                      /                     */
        {  {0,6},          {1,6},  {2,6},  {3,6},  {4,6},  {5,6},      {6,6},                {7,0}  },
        {  {0,7},          {1,7},  {2,7},  {3,7},  {4,7},  {5,7},      {6,7},                {7,1}  },
        {  {0,8},          {1,8},  {2,8},  {3,8},  {4,8},  {5,8},      {6,8},                {7,2}  },
        {  {0,9},          {1,9},  {2,9},  {3,9},  {4,9},  {5,9},      {6,9},                {7,3}  },

        {  {0,10},         {1,10}, {2,10}, {3,10}, {4,10},             {5,10},  {6,10},  {7,10}     }, // this row is mirrored

        {  {0,5},  {1,5},  {2,5},  {3,5},  {4,5},  {5,5},  {6,5},  {7,5}    }, // encoders unchanged


        /* Right hand, matrix positions

                --- outermost column          --- alphanumeric            --- innermost column    --- touch encoders unchanged
               /               ______________|______________             |                       /
              /               /                              \           |                      /                     */
        {  {0,0},          {1,0},  {2,0},  {3,0},  {4,0},  {5,0},      {6,0},                {7,6}  },
        {  {0,1},          {1,1},  {2,1},  {3,1},  {4,1},  {5,1},      {6,1},                {7,7}  },
        {  {0,2},          {1,2},  {2,2},  {3,2},  {4,2},  {5,2},      {6,2},                {7,8}  },
        {  {0,3},          {1,3},  {2,3},  {3,3},  {4,3},  {5,3},      {6,3},                {7,9}  },

        {  {0,4},          {1,4},  {2,4},  {3,4},  {4,4},              {5,4},  {6,4},  {7,4}        }, // this row is mirrored

        {  {0,11}, {1,11}, {2,11}, {3,11}, {4,11}, {5,11}, {6,11}, {7,11}   }, // encoders unchanged

    };

#endif // defined KEYBOARD_rgbkb_sol3_rev1 && defined SWAP_HANDS_ENABLE
