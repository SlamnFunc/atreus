#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,
		KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,
		KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                               KC_N,       KC_M,       KC_COMM,    KC_QUES,    KC_SLSH,
		KC_ESC,     KC_TAB,     KC_LCTL,    MO(2),      KC_LGUI,    KC_BSPC,    KC_SPC,     KC_LALT,    MO(1),      KC_LSFT,    KC_QUOT,    KC_ENT
	),

	[1] = LAYOUT(
		S(KC_Q),    S(KC_W),    S(KC_E),    S(KC_R),    S(KC_T),                            S(KC_Y),    S(KC_U),    S(KC_I),    S(KC_O),    S(KC_P),
		S(KC_A),    S(KC_S),    S(KC_D),    S(KC_F),    S(KC_G),                            S(KC_H),    S(KC_J),    S(KC_K),    S(KC_L),    S(KC_SCLN),
		S(KC_Z),    S(KC_X),    S(KC_C),    S(KC_V),    S(KC_B),                            S(KC_N),    S(KC_M),    KC_DOT,     KC_EXLM,    KC_BSLS,
		KC_TRNS,    KC_TRNS,    KC_TRNS,    MO(3),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_DQT,     KC_TRNS
	),

	[2] = LAYOUT(
		KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,
		KC_PLUS,    KC_ASTR,    KC_UP,      KC_CIRC,    KC_AMPR,                            KC_LT,      KC_LPRN,    KC_LCBR,    KC_LBRC,    KC_SCLN,
		KC_GRV,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_HASH,                            KC_EQL,     KC_UNDS,     KC_COMM,    KC_QUES,    KC_SLSH,
		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    MO(3),      KC_TRNS,    KC_QUOT,    KC_TRNS
	),

	[3] = LAYOUT(
		KC_SLCK,    KC_PAUSE,   KC_MRWD,    KC_MPLY,    KC_MFFD,                            KC__MUTE,   KC__VOLDOWN,KC__VOLUP,  KC_F4,      KC_POWER,
		KC_PMNS,    KC_SLSH,    KC_UP,      KC_PERC,    KC_PIPE,                            KC_GT,      KC_RPRN,    KC_RCBR,    KC_RBRC,    S(KC_SCLN),
		KC_TILD,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_DOLLAR,                          KC_EQL,      KC_AT,     KC_DOT,     KC_EXLM,    KC_BSLS,
		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_DQT,     KC_TRNS
	)
};