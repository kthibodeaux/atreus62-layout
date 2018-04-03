#include "atreus62.h"
#include "kthibodeaux.h"

// Layers
enum {
  _DEFAULT,
  _SYMB,
  _TMUX,
  _NUM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_DEFAULT] = {
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   XXXXXXX, KC_6,   KC_7,      KC_8,    KC_9,    KC_0,    _______ },
  { KC_DELT, KC_Q,    KC_W,    KC_F,    KC_P,     KC_G,   XXXXXXX, KC_J,   KC_L,      KC_U,    KC_Y,    KC_SCLN, KC_BSLS },
  { KC_TAB,  MY_A,    MY_R,    KC_S,    MY_T,     KC_D,   XXXXXXX, KC_H,   MY_N,      MY_E,    MY_I,    MY_O,    _______ },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,   KC_BSPC, KC_K,   KC_M,      KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT },
  { _______, _______, _______, _______, MO(_NUM), MY_SPC, _______, KC_ENT, MO(_SYMB), KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT }
},

[_SYMB] = {
  { KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12  },
  { _______, _______, KC_TILD, KC_LCBR, KC_RCBR, _______, XXXXXXX, KC_MUTE, KC_LPRN, KC_RPRN, KC_GRV,  _______, _______ },
  { _______, KC_AMPR, KC_PIPE, KC_QUOT, KC_DQUO, _______, XXXXXXX, KC_VOLU, KC_COLN, KC_AT,   KC_MINS, KC_HASH, _______ },
  { _______, _______, _______, KC_PLUS, KC_EQL,  _______, _______, KC_VOLD, KC_LBRC, KC_RBRC, _______, _______, _______ },
  { RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ }
},

[_TMUX] = {
  { _______, _______,     _______,     _______,            _______,          _______,              XXXXXXX,        _______,               _______,                      _______, _______,      _______,      _______ },
  { _______, _______,     _______,     M(M_TMUX_JOIN_V),   M(M_TMUX_JOIN_H), _______,              XXXXXXX,        _______,               _______,                      _______, _______,      _______,      _______ },
  { _______, M(M_TMUX_1), M(M_TMUX_2), M(M_TMUX_3),        M(M_TMUX_4),      M(M_TMUX_5),          XXXXXXX,        _______,               M(M_TMUX_COPY_MODE),          _______, M(M_TMUX_VS), M(M_TMUX_SP), _______ },
  { _______, _______,     _______,     M(M_TMUX_OPEN_URL), TERM_PASTE,       M(M_TMUX_BREAK_PANE), M(M_TMUX_NEW),  _______,               M(M_TMUX_SHOW_CURRENT_STORY), _______, _______,      _______,      _______ },
  { _______, _______,     _______,     _______,            _______,          _______,              M(M_TMUX_ZOOM), M_TMUX_FINGERS_PLUGIN, _______,                      _______, _______,      _______,      _______ }
},

[_NUM] = {
  { _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______ },
  { _______, I3_1,    I3_2,    I3_3,    I3_4,    I3_5,    XXXXXXX, I3_6,    I3_7,    I3_8,    I3_9,    I3_0,    _______ },
  { _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______ },
  { _______, I3M_1,   I3M_2,   I3M_3,   I3M_4,   I3M_5,   _______, I3M_6,   I3M_7,   I3M_8,   I3M_9,   I3M_0,   _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, KC_0,    _______, _______, _______, _______ }
},

/*
[_TRNS] = {
  { _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ }
},
*/
};
