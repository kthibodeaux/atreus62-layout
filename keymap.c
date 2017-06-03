#include "atreus62.h"
#include "kthibodeaux.h"

// Layers
enum {
  _DEFAULT,
  _SYMB,
  _TMUX
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_DEFAULT] = {
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   NO_KEY,  KC_6,   KC_7,      KC_8,    KC_9,    KC_0,    KC_TRNS },
  { KC_DELT, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,   NO_KEY,  KC_J,   KC_L,      KC_U,    KC_Y,    KC_SCLN, KC_BSLS },
  { KC_TAB,  KC_A,    MY_R,    KC_S,    MY_T,    KC_D,   NO_KEY,  KC_H,   MY_N,      MY_E,    MY_I,    KC_O,    KC_TRNS },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_BSPC, KC_K,   KC_M,      KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MY_SPC, KC_TRNS, KC_ENT, MO(_SYMB), KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT }
},

[_SYMB] = {
  { KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   NO_KEY,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12  },
  { KC_TRNS, KC_TRNS, KC_TILD, KC_LCBR, KC_RCBR, KC_TRNS, NO_KEY,  KC_MUTE, KC_LPRN, KC_RPRN, KC_GRV,  KC_TRNS, KC_TRNS },
  { KC_TRNS, KC_AMPR, KC_PIPE, KC_QUOT, KC_DQUO, KC_TRNS, NO_KEY,  KC_VOLU, KC_COLN, KC_AT,   KC_MINS, KC_HASH, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_PLUS, KC_EQL,  KC_TRNS, KC_TRNS, KC_VOLD, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS },
  { RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},

[_TMUX] = {
  { KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,            KC_TRNS,          KC_TRNS,              NO_KEY,         KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS },
  { KC_TRNS, KC_TRNS,     KC_TRNS,     M(M_TMUX_JOIN_V),   M(M_TMUX_JOIN_H), KC_TRNS,              NO_KEY,         KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS },
  { KC_TRNS, M(M_TMUX_1), M(M_TMUX_2), M(M_TMUX_3),        M(M_TMUX_4),      M(M_TMUX_5),          NO_KEY,         KC_TRNS, M(M_TMUX_COPY_MODE),          KC_TRNS, M(M_TMUX_VS), M(M_TMUX_SP), KC_TRNS },
  { KC_TRNS, KC_TRNS,     KC_TRNS,     M(M_TMUX_OPEN_URL), TERM_PASTE,       M(M_TMUX_BREAK_PANE), M(M_TMUX_NEW),  KC_TRNS, M(M_TMUX_SHOW_CURRENT_STORY), KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS },
  { KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,            KC_TRNS,          KC_TRNS,              M(M_TMUX_ZOOM), KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS }
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
