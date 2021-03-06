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
  M_TMUX_SHOW_CURRENT_STORY,
  M_TMUX_JOIN_V,
  M_TMUX_JOIN_H,
  M_TMUX_BREAK_PANE,
  M_TMUX_OPEN_URL,
  M_TMUX_FINGERS_PLUGIN,
  M_HOLD_W,
  M_F3_P
};

// Tap dances
enum {
  TD_SPACE
};

enum {
  TAP_DANCE_MODE_UNDERSCORE,
  TAP_DANCE_MODE_CAMEL_CASE
};

#define _______ KC_TRNS

#define NO_KEY KC_NO
#define TERM_PASTE LALT(LCTL(KC_V))

#define MY_T CTL_T(KC_T)
#define MY_N CTL_T(KC_N)
#define MY_R ALT_T(KC_R)
#define MY_I ALT_T(KC_I)
#define MY_E LT(_TMUX, KC_E)
#define MY_A SFT_T(KC_A)
#define MY_O SFT_T(KC_O)
#define MY_SPC TD(TD_SPACE)

#define I3_1 LALT(KC_1)
#define I3_2 LALT(KC_2)
#define I3_3 LALT(KC_3)
#define I3_4 LALT(KC_4)
#define I3_5 LALT(KC_5)
#define I3_6 LALT(KC_6)
#define I3_7 LALT(KC_7)
#define I3_8 LALT(KC_8)
#define I3_9 LALT(KC_9)
#define I3_0 LALT(KC_0)

#define I3M_1 LALT(LCTL(KC_1))
#define I3M_2 LALT(LCTL(KC_2))
#define I3M_3 LALT(LCTL(KC_3))
#define I3M_4 LALT(LCTL(KC_4))
#define I3M_5 LALT(LCTL(KC_5))
#define I3M_6 LALT(LCTL(KC_6))
#define I3M_7 LALT(LCTL(KC_7))
#define I3M_8 LALT(LCTL(KC_8))
#define I3M_9 LALT(LCTL(KC_9))
#define I3M_0 LALT(LCTL(KC_0))

static bool w_is_held;
static char space_tap_dance_mode = TAP_DANCE_MODE_UNDERSCORE;

void my_space (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code(KC_SPC);
    unregister_code(KC_SPC);
    reset_tap_dance(state);
  } else if (state->count == 2) {
    if(space_tap_dance_mode == TAP_DANCE_MODE_UNDERSCORE) {
      register_code(KC_LSFT);
      register_code(KC_MINS);
      unregister_code(KC_MINS);
      unregister_code(KC_LSFT);
    } else if (space_tap_dance_mode == TAP_DANCE_MODE_CAMEL_CASE) {
      set_oneshot_mods(MOD_LSFT);
    }
    reset_tap_dance(state);
  } else {
    if(space_tap_dance_mode == TAP_DANCE_MODE_UNDERSCORE) {
      space_tap_dance_mode = TAP_DANCE_MODE_CAMEL_CASE;
    } else if (space_tap_dance_mode == TAP_DANCE_MODE_CAMEL_CASE) {
      space_tap_dance_mode = TAP_DANCE_MODE_UNDERSCORE;
    }
    reset_tap_dance(state);
  }

}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SPACE] = ACTION_TAP_DANCE_FN(my_space)
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

void toggle_hold_w(keyrecord_t *record) {
  if (record->event.pressed) {
    if (w_is_held == true) {
      w_is_held = false;
      unregister_code (KC_W);
    } else {
      w_is_held = true;
      register_code (KC_W);
    }
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
    case M_TMUX_JOIN_V: do_tmux_key(record, KC_V, KC_LSFT); break;
    case M_TMUX_JOIN_H: do_tmux_key(record, KC_S, KC_LSFT); break;
    case M_TMUX_BREAK_PANE: do_tmux_key(record, KC_B, KC_LSFT); break;
    case M_TMUX_OPEN_URL: do_tmux_key(record, KC_O, KC_NO); break;
    case M_TMUX_FINGERS_PLUGIN: do_tmux_key(record, KC_F, KC_LSFT); break;
    case M_HOLD_W: toggle_hold_w(record); break;
    case M_F3_P:
      if (record->event.pressed) {
        register_code(KC_F3);
        register_code(KC_P);
        unregister_code(KC_P);
        unregister_code(KC_F3);
      }
      break;
  }
  return MACRO_NONE;
};
