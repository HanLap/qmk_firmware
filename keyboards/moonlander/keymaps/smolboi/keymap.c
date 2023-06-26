#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_uk.h"
#include "keymap_us_international.h"

#define MOON_LED_LEVEL LED_LEVEL

#define DRIVER_LED_TOTAL 72

#define MY_AGUI MT(MOD_LGUI, KC_A)
#define MY_SALT MT(MOD_LALT, KC_S)
#define MY_DSFT MT(MOD_LSFT, KC_D)
#define MY_FCTL MT(MOD_LCTL, KC_F)

#define MY_JCTL MT(MOD_RCTL, KC_J)
#define MY_KSFT MT(MOD_RSFT, KC_K)
#define MY_LALT MT(MOD_LALT, KC_L)
#define MY_CGUI MT(MOD_RGUI, KC_SCLN)

#define MY_ESC MT(MOD_LCTL, KC_ESCAPE)


enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  TOG_ASH // auto shift toggle
};

enum layouts {
  BASE,
  SYMB,
  SYM2,
  MEDI
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______,       
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , _______,                        _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,      
    KC_HOME, MY_AGUI, MY_SALT, MY_DSFT, MY_FCTL, KC_G   , _______,                        _______, KC_H   , MY_JCTL, MY_KSFT, MY_LALT, MY_CGUI, KC_QUOT,       
    CW_TOGG, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                                          KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,      
    _______, _______, _______, _______, MO(1)  ,           KC_LSFT,                      MO(3)  ,           MO(2)  , _______, _______, _______, _______,         
                                                  KC_SPC , KC_ESC , _______,    _______, KC_ENT , KC_BSPC
  ),
  [SYMB] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______,         
    _______, KC_EXLM, KC_AT  , KC_LCBR, KC_RCBR, KC_PIPE, _______,                        _______, KC_EQL , KC_7   , KC_8   , KC_9   , KC_ASTR, _______,         
    _______, KC_HASH, KC_DLR , KC_LPRN, KC_RPRN, KC_GRV , _______,                        _______, KC_MINS, KC_4   , KC_5   , KC_6   , KC_PLUS, _______,    
    _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                                          KC_UNDS, KC_1   , KC_2   , KC_3   , KC_BSLS, _______, 
    _______, _______, _______, _______, _______,           _______,                      _______,           KC_0   , _______, _______, _______, _______, 
                                                  _______, _______, _______,    _______, _______, _______
  ),
  [SYM2] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______,          
    _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______,                        _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11,  
    _______, KC_TAB , _______, _______, _______, _______, _______,                        _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, KC_F12,
    _______, _______, _______, _______, _______, _______,                                          KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______, 
    _______, _______, _______, _______, _______,           _______,                      _______,           _______, _______, _______, _______, _______, 
                                                  KC_ESC , _______, _______,    _______, _______, _______
  ),
  [MEDI] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______,          
    _______, _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______,  
    _______, _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                                          _______, _______, _______, _______, _______, QK_BOOT, 
    _______, _______, _______, _______, _______,           RGB_TOG,                      _______,           _______, _______, _______, _______, _______, 
                                                  KC_ESC , RGB_MOD, _______,    _______, _______, _______
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();

  // ML_LED_3(!get_autoshift_state());
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
      [BASE] = { 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, 


      {  0,  0,  0}, {  0,  0,  0}, {  0,  0  ,0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0  ,0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0  ,0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0  ,0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0  ,0}, {  0,  0,  0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0  ,0}, {  0,  0,  0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0  ,0}, 
      {  0,  0,  0}, {  0,  0,  0}, {  0,  0  ,0}, {  0,  0,  0} 
    },

    [SYMB] = { {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204}, {19,218,204} },

    [MEDI] = { {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    // case BASE:
      // set_layer_color(BASE);
      // break;
    case SYMB:
      set_layer_color(SYMB);
      break;
    case SYM2:
      rgb_matrix_set_color_all(200, 200,  255);
      break;
    case MEDI:
      set_layer_color(MEDI);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    
    case TOG_ASH:
      if (record->event.pressed) {
        // autoshift_toggle();
        // ML_LED_3(!get_autoshift_state());
      }
  }
  return true;
}

// bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
//    switch(keycode) {
//        case KC_LBRC: 
//       case KC_RBRC:
//            return false;
//        default:
//            return true;
//    }
// }

