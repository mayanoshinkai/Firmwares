#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO, 
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    )
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {      5,       4,         3,        2,        1,        0,   NO_LED,   NO_LED },
  { NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED },
  { NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED },
  { NO_LED,             NO_LED,   NO_LED,   NO_LED,   NO_LED,             NO_LED },
  {      9,        8,        7,        6,   NO_LED,   NO_LED,   NO_LED,          },
  { NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED,   NO_LED           }
}, {
  // LED Index to Physical Position
  { 0,  189 }, { 0,  168 }, { 0,  147 }, { 0,  126 }, { 0,  105 }, { 0,  84 }, { 0,  63 }, { 0,  42 }, { 0,  21 }, { 0,  0 }
}, {
  // LED Index to Flag
  0, 0, 0, 0, 0, 0, 0, 8, 8, 8
} };

/* aRGB Configuration */ 
void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (layer_state_is (1)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(9, 60, 15, 15);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(9, 0, 0, 0);
    }
        if (layer_state_is (2)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(8, 15, 60, 15);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(8, 0, 0, 0);
    }
        if (layer_state_is (3)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(7, 15, 15, 60);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(7, 0, 0, 0);
    }
}

void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
}
