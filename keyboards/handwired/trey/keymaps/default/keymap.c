#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* LAYER 0
  * ,-----------------------.
  * |  F1   |  F2   | MUTE  |
  * |-------+-------+-------|
  * |  F3   |  F4  |  F5    |
  * `-------+-------+-------'
  */
  [0] = LAYOUT(
    KC_F1, KC_F2, KC_MUTE \
    KC_F3, KC_F4, KC_F5  \
  )
};

void encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
}
