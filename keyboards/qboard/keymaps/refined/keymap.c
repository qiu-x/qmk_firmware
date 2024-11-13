#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_planck_mit(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, QK_GESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_MINS, KC_QUOT, KC_LCTL, KC_TILD, KC_LGUI, KC_LALT, MO(1), KC_SPC, MO(2), KC_RALT, KC_BSLS, KC_EQL, KC_SLSH),
    [1] = LAYOUT_planck_mit(KC_0, KC_7, KC_8, KC_9, KC_LCBR, KC_RCBR, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_ESC, KC_4, KC_5, KC_6, KC_LBRC, KC_RBRC, KC_NO, KC_F5, KC_F6, KC_F6, KC_F7, KC_ENT, KC_LSFT, KC_1, KC_2, KC_3, KC_LPRN, KC_RPRN, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_LCTL, KC_NO, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO),
    [2] = LAYOUT_planck_mit(KC_0, KC_7, KC_8, KC_9, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_ESC, KC_4, KC_5, KC_6, KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_ENT, KC_LSFT, KC_1, KC_2, KC_3, KC_LPRN, KC_RPRN, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_LGUI, KC_LALT, KC_NO, KC_TRNS, KC_TRNS, KC_RALT, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




