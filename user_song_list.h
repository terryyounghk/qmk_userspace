// https://docs.qmk.fm/#/feature_audio?id=songs

#define TY_LAYER_SOUND          S__NOTE(_C6), S__NOTE(_E6), S__NOTE(_G6), S__NOTE(_REST)
#define TY_CAPS_ON_SOUND        S__NOTE(_C6), S__NOTE(_E6), S__NOTE(_G6), H__NOTE(_C7)
#define TY_CAPS_OFF_SOUND       S__NOTE(_C7), S__NOTE(_G6), S__NOTE(_E6), H__NOTE(_C6)

#define TY_ALPHAS_SOUND         TY_LAYER_SOUND
#define TY_NUMBERS_SOUND        TY_LAYER_SOUND, TY_LAYER_SOUND
#define TY_CODING_SOUND         TY_LAYER_SOUND, TY_LAYER_SOUND, TY_LAYER_SOUND
#define TY_CONTROLS_SOUND       TY_LAYER_SOUND, TY_LAYER_SOUND, TY_LAYER_SOUND, TY_LAYER_SOUND

#define TY_OSM_ON_SOUND         S__NOTE(_D7), S__NOTE(_D7)
#define TY_OSM_OFF_SOUND        S__NOTE(_D5), S__NOTE(_D5)

// alternatively, apps like Captin give both visual and audio feedback for Caps Lock
#define TY_CAPS_LOCK_ON_SOUND   TY_CAPS_ON_SOUND,  TY_CAPS_ON_SOUND,  TY_CAPS_ON_SOUND
#define TY_CAPS_LOCK_OFF_SOUND  TY_CAPS_OFF_SOUND, TY_CAPS_OFF_SOUND, TY_CAPS_OFF_SOUND

#define TY_CAPS_WORD_ON_SOUND   TY_CAPS_ON_SOUND
#define TY_CAPS_WORD_OFF_SOUND  TY_CAPS_OFF_SOUND
