#include "atreus62.h"

#define _DEFAULT 0
#define _NAV 1
#define _RESET 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_DEFAULT] = {
  { KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS },
  { KC_BSLS,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_TRNS,  KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,    KC_RBRC },
  { KC_TAB,   KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_TRNS,  KC_H,    KC_N,    KC_E,    KC_I,    KC_O, KC_QUOT },
  { KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_DELT,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LBRC },
  { KC_LCTL,  KC_LGUI, KC_LALT, KC_GRV,  MO(_NAV),KC_BSPC, KC_ENT,   KC_SPC,  KC_EQL,  KC_MINS, KC_QUOT, KC_ENT,  KC_RGUI }
},

[_NAV] = {
  { TO(_DEFAULT),  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11  },
  { KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_F12,  KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS },
  { TO(_RESET),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},

[_RESET] = {
  { TO(_DEFAULT),  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
  { KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
  { KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
  { KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
  { KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , RESET }
}

/*
[_TRNS] = {
  { KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
*/
};


void do_tap_dance (qk_tap_dance_state_t *state) {
  switch (state->keycode) {
  }
}

qk_tap_dance_action_t tap_dance_actions[] = { };

const uint16_t PROGMEM fn_actions[] = { };

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  switch (id) {
  case 0:
    if (record->event.pressed) {
      register_code(KC_RSFT);
    }
    else {
      unregister_code(KC_RSFT);
    }
    break;
  }
  return MACRO_NONE;
};
