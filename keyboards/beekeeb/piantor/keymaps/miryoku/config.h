/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once

// #define IGNORE_MOD_TAP_INTERRUPT
// #define AUTO_SHIFT_TIMEOUT 200
// #define NO_AUTO_SHIFT_SPECIAL
#define AUTO_SHIFT_NO_AUTO_REPEAT
#define MOONLANDER_USER_LEDS


#define XXX KC_NO

#define LAYOUT_miryoku(\
     K00, K01, K02, K03, K04,               K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,               K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,               K25, K26, K27, K28, K29,\
               K32, K33, K34,               K35, K36, K37\
)\
LAYOUT_split_3x6_3(\
XXX, K00, K01, K02, K03, K04,     K05, K06, K07, K08, K09, XXX,\
XXX, K10, K11, K12, K13, K14,     K15, K16, K17, K18, K19, XXX,\
XXX, K20, K21, K22, K23, K24,     K25, K26, K27, K28, K29, XXX,\
          K32, K33, K34,     K35, K36, K37\
)
