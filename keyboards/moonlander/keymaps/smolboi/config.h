/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once

#define ORYX_CONFIGURATOR
// #define IGNORE_MOD_TAP_INTERRUPT
#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"63GbE/RnNPW"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define RGB_MATRIX_STARTUP_SPD 60
// #define AUTO_SHIFT_TIMEOUT 200
// #define NO_AUTO_SHIFT_SPECIAL
#define AUTO_SHIFT_NO_AUTO_REPEAT
#define MOONLANDER_USER_LEDS


#define XXX KC_NO

#define LAYOUT_smolboi(\
  K40, K00, K01, K02, K03, K04,               K05, K06, K07, K08, K09, K43,\
  K41, K10, K11, K12, K13, K14,               K15, K16, K17, K18, K19, K44,\
  K42, K20, K21, K22, K23, K24,               K25, K26, K27, K28, K29, K45,\
                           K38,               K39,\
                 K32, K33, K34,               K35, K36, K37\
)\
LAYOUT_moonlander(\
XXX, XXX, XXX, XXX, XXX, XXX, XXX,     XXX, XXX, XXX, XXX, XXX, XXX, XXX,\
K40, K00, K01, K02, K03, K04, XXX,     XXX, K05, K06, K07, K08, K09, K43,\
K41, K10, K11, K12, K13, K14, XXX,     XXX, K15, K16, K17, K18, K19, K44,\
K42, K20, K21, K22, K23, K24,               K25, K26, K27, K28, K29, K45,\
XXX, XXX, XXX, XXX, K32,      K38,     K39,      K37, XXX, XXX, XXX, XXX,\
                    K33, K34, XXX,     XXX, K35, K36\
)
