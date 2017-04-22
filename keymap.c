#include "atreus62.h"

// Layers
enum {
  _DEFAULT,
  _SYMB,
  _TMUX
};

// Macros
enum {
  M_TMUX_1,
  M_TMUX_2,
  M_TMUX_3,
  M_TMUX_4,
  M_TMUX_5,
  M_TMUX_COPY_MODE,
  M_TMUX_SP,
  M_TMUX_VS,
  M_TMUX_NEW,
  M_TMUX_ZOOM,
  M_TMUX_SHOW_CURRENT_STORY
};

// Tap dances
enum {
  TD_SPACE
};

#define NO_KEY KC_NO
#define TERM_PASTE LALT(LSFT(KC_INS))

#define MY_T CTL_T(KC_T)
#define MY_N CTL_T(KC_N)
#define MY_R ALT_T(KC_R)
#define MY_I ALT_T(KC_I)
#define MY_E LT(_TMUX, KC_E)
#define MY_SPC TD(TD_SPACE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_DEFAULT] = {
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    NO_KEY, KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS },
  { KC_DELT, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    NO_KEY, KC_J,      KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS },
  { KC_TAB,  KC_A,    MY_R,    KC_S,    MY_T,    KC_D,    NO_KEY, KC_H,      MY_N,    MY_E,    MY_I,    KC_O,    KC_TRNS },
  { KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MY_SPC, KC_K,      KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_ENT, MO(_SYMB), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},

[_SYMB] = {
  { KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   NO_KEY,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12  },
  { KC_TRNS, KC_TRNS, KC_TILD, KC_LCBR, KC_RCBR, KC_TRNS, NO_KEY,  KC_MUTE, KC_LPRN, KC_RPRN, KC_GRV,  KC_TRNS, KC_TRNS },
  { KC_TRNS, KC_AMPR, KC_PIPE, KC_QUOT, KC_DQUO, KC_TRNS, NO_KEY,  KC_VOLU, KC_COLN, KC_AT,   KC_MINS, KC_HASH, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_PLUS, KC_EQL,  KC_TRNS, KC_TRNS, KC_VOLD, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS },
  { RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},

[_TMUX] = {
  { KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,     NO_KEY,         KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS },
  { KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,     NO_KEY,         KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS },
  { KC_TRNS, M(M_TMUX_1), M(M_TMUX_2), M(M_TMUX_3), M(M_TMUX_4),  M(M_TMUX_5), NO_KEY,         KC_TRNS, M(M_TMUX_COPY_MODE),          KC_TRNS, M(M_TMUX_VS), M(M_TMUX_SP), KC_TRNS },
  { KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,     TERM_PASTE,   KC_TRNS,     M(M_TMUX_NEW),  KC_TRNS, M(M_TMUX_SHOW_CURRENT_STORY), KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS },
  { KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,     M(M_TMUX_ZOOM), KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS }
}

/*
[_TRNS] = {
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NO_KEY,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NO_KEY,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NO_KEY,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
*/
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SPACE] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_UNDERSCORE)
};

void do_tmux_key(keyrecord_t *record, uint8_t code, uint8_t modifier) {
  if (record->event.pressed) {
    register_code(KC_LCTRL);
    register_code(KC_SPC);
    unregister_code(KC_SPC);
    unregister_code(KC_LCTRL);
    register_code(modifier);
    register_code(code);
    unregister_code(code);
    unregister_code(modifier);
  }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  switch (id) {
    case M_TMUX_1: do_tmux_key(record, KC_1, KC_NO); break;
    case M_TMUX_2: do_tmux_key(record, KC_2, KC_NO); break;
    case M_TMUX_3: do_tmux_key(record, KC_3, KC_NO); break;
    case M_TMUX_4: do_tmux_key(record, KC_4, KC_NO); break;
    case M_TMUX_5: do_tmux_key(record, KC_5, KC_NO); break;
    case M_TMUX_COPY_MODE: do_tmux_key(record, KC_LBRC, KC_NO); break;
    case M_TMUX_SP: do_tmux_key(record, KC_QUOT, KC_LSFT); break;
    case M_TMUX_VS: do_tmux_key(record, KC_5, KC_LSFT); break;
    case M_TMUX_NEW: do_tmux_key(record, KC_C, KC_NO); break;
    case M_TMUX_ZOOM: do_tmux_key(record, KC_Z, KC_NO); break;
    case M_TMUX_SHOW_CURRENT_STORY: do_tmux_key(record, KC_J, KC_NO); break;
  }
  return MACRO_NONE;
};
