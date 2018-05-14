#include "ergo42.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,------------------------------------------------.          ,------------------------------------------------.
 * | ESC  | Tab  |   Q  |   W  |   E  |   R  |  T   |          |  Y   |   U  |   I  |   O  |   P  |   [  |  ]   |
 * |------+------+------+------+------+------+------|          |-------------+------+------+------+------+------|
 * | LCtrl| LCtrl|   A  |   S  |   D  |   F  |  G   |          |  H   |   J  |   K  |   L  |   ;  |   '  |  \   |
 * |------+------+------+------+------+------+------|          |------|------+------+------+------+------+------|
 * | LSft | LSft |   Z  |   X  |   C  |   V  |  B   |          |  N   |   M  |   ,  |   .  |   /  | RSft |      |
 * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
 * | META |      |      | LGUI | LAlt | Bksp |Space |          |Space | Entr |      |                    | SYMB |
 * `------------------------------------------------'          `------------------------------------------------'
 */

[BASE] = KEYMAP( \
  KC_ESC,   KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, \
  KC_LCTL,  KC_LCTL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_BSLS, \
  KC_LSFT,  KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RSFT, \
  MO(META), XXXXXXX, XXXXXXX,KC_LGUI, KC_LALT, KC_BSPC,KC_SPC,  KC_SPC, KC_ENT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(SYMB) \
),

/* META
 * ,------------------------------------------------.   ,------------------------------------------------.
 * | ESC  |   `  |   1  |   2  |   3  |   4  |   5  |   |   6  |   7  |   8  |   9  |   0  | -    | =    |
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | RCtrl|  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   |  F7  |  F8  |  F9  | F10  | F11  | F12  |      |
 * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
 * | LSft | LSft |      |      |      |      |      |   |      |      | VolUP|      | Pgup | RSft |      |
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | META |      |      | LGUI | LAlt | Bksp |Space |   |Space | Entr | VolDN| Home | Pgdn | End  |      |
 * `------------------------------------------------'   `------------------------------------------------'
 */

[META] = KEYMAP( \
  _______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, \
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, \
  _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, KC_PGUP, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_VOLD, KC_HOME, KC_PGDN, KC_END,  _______ \
),

/* SYMB
 * ,------------------------------------------------.   ,------------------------------------------------.
 * | ESC  |   ~  |   !  |   @  |   #  |   $  |   %  |   |   ^  |   &  |   *  |   (  |   )  | _    | +    |
 * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
 * | Ctrl | Ctrl |      |      |      |      |      |   |      |      |      |      | UP   |      | Pgup |
 * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
 * | LSft | LSft |      |      |      |      |      |   |      |      |      | LEFT | DOWN | RIGHT| Pdown|
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | META |      |      | LGUI | LAlt | Bksp |Space |   |Space | Entr |      |      |      |      |      |
 * `------------------------------------------------'   `------------------------------------------------'
 */

[SYMB] = KEYMAP( \
  _______, S(KC_GRV),S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),   S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), S(KC_MINS), S(KC_EQL), \
  _______, _______, _______, _______, _______, _______, _______,    _______,    _______, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, KC_PGUP, \
  _______, _______, _______, _______, _______, _______, _______,    _______,    _______, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, \
  _______, _______, _______, _______, _______, _______, _______,    _______,    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______ \
)
};
