#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_D,
        KC_N
    )
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 1 },
  { 0 }
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 0,  64 }
}, {
  // LED Index to Flag
  2, 2
} };


