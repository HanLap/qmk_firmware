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

#define TG_MEDI LT(MEDI, KC_ESC )
#define TG_NAV  LT(NAV , KC_SPC )
#define TG_MOUS LT(MOUS, KC_TAB )

#define TG_SYMB LT(SYMB, KC_ENT )
#define TG_NUM  LT(NUM , KC_BSPC)
#define TG_FUN  LT(FUN , KC_DEL )

#define TG_BUTN LT(BUTN, KC_Z   )


enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  TOG_ASH // auto shift toggle
};

enum layouts {
  BASE,
  NAV ,
  MOUS,
  BUTN,
  MEDI,
  NUM ,
  SYMB,
  FUN ,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_miryoku(
    KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,        KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,      
    MY_AGUI, MY_SALT, MY_DSFT, MY_FCTL, KC_G   ,        KC_H   , MY_JCTL, MY_KSFT, MY_LALT, MY_CGUI,       
    TG_BUTN, KC_X   , KC_C   , KC_V   , KC_B   ,        KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,      
                      TG_MEDI, TG_NAV , TG_MOUS,        TG_SYMB, TG_NUM , TG_FUN 
  ),
  [NAV ] = LAYOUT_miryoku(
    _______, _______, _______, _______, _______,        KC_CUT , KC_COPY, KC_PSTE, KC_UNDO, _______,      
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,        KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______,       
    _______, _______, _______, _______, _______,        KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS ,      
                      _______, _______, _______,        KC_ENT , KC_BSPC, KC_DEL 
  ),
  [MOUS] = LAYOUT_miryoku(
    _______, _______, _______, _______, _______,        KC_CUT , KC_COPY, KC_PSTE, KC_UNDO, _______,      
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,        KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,       
    _______, _______, _______, _______, _______,        KC_WH_L, KC_WH_D, KC_MS_U, KC_MS_R, KC_INS ,      
                      _______, _______, _______,        KC_BTN2, KC_BTN1, KC_BTN3 
  ),
  [BUTN] = LAYOUT_miryoku(
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, QK_BOOT,      
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,        _______, _______, _______, _______, _______,       
    _______, KC_CUT , KC_COPY, KC_PSTE, _______,        _______, _______, _______, _______, _______,      
                      _______, _______, _______,        _______, _______, _______ 
  ),
  [MEDI] = LAYOUT_miryoku(
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, QK_BOOT,      
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,        _______, RGB_TOG, _______, _______, _______,       
    _______, _______, _______, _______, _______,        _______, RGB_MOD, _______, _______, _______,      
                      _______, _______, _______,        _______, _______, _______ 
  ),
  [NUM ] = LAYOUT_miryoku(
    KC_LBRC, KC_7   , KC_8   , KC_9   , KC_RBRC,        _______, _______, _______, _______, _______,      
    KC_QUOT, KC_4   , KC_5   , KC_6   , KC_EQL ,        _______, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI,       
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_BSLS,        _______, _______, _______, _______, _______,      
                      KC_0   , KC_DOT , KC_MINS,        _______, _______, _______ 
  ),
  [SYMB] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,        _______, _______, _______, _______, _______,      
    KC_DQT , KC_DLR , KC_PERC, KC_CIRC, KC_PLUS,        _______, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI,       
    KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_PIPE,        _______, _______, _______, _______, _______,      
                      KC_LPRN, KC_RPRN, KC_UNDS,        _______, _______, _______ 
  ),
  [FUN ] = LAYOUT_miryoku(
    KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR,        _______, _______, _______, _______, _______,      
    KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_RALT,        _______, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI,       
    KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_RALT,        _______, _______, _______, _______, _______,      
                      KC_ESC , KC_SPC , KC_TAB ,        _______, _______, _______ 
  )
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
    // case SYMB:
    //   set_layer_color(SYMB);
    //   break;
    // case NAV:
    //   rgb_matrix_set_color_all(200, 200,  255);
    //   break;
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

