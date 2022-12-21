/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once

#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
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