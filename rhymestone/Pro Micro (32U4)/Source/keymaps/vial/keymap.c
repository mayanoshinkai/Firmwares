#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    )
};

/* aRGB Configuration */
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {     10,       11,       12,       13,        0 },
  {      9,       18,       19,       14,        1 },
  {      8,       17,       16,       15,        2 },
  {      7,        6,        5,        4,        3 },
  {     30,       31,       32,       33,       20 },
  {     29,       38,       39,       34,       21 },
  {     28,       37,       36,       35,       22 },
  {     27,       26,       25,       24,       23 }
}, {
  // LED Index to Physical Position
  { 100,  0 }, { 100,  20 }, { 100,  40 }, { 100,  60 }, {  75,  60 }, {  50,  60 },  {  25,  60 },  {   0,  60 }, {   0,  40 }, {   0,  20 },
  {   0,  0 }, {  25,   0 }, { 50,    0 }, {  75,   0 }, {  75,  20 }, {  75,  40 },  {  50,  40 },  {  25,  40 }, {  25,  20 }, {  50,  20 },
  { 225,  0 }, { 225,  20 }, { 225,  40 }, { 225,  60 }, { 200,  60 }, { 175,  60 },  { 150,  60 },  { 125,  60 }, { 125,  40 }, { 125,  20 },
  { 125,  0 }, { 150,   0 }, { 175,   0 }, { 200,   0 }, { 200,  20 }, { 200,  40 },  { 175,  40 },  { 150,  40 }, { 150,  20 }, { 175,  20 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };
