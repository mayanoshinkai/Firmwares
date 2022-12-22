#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,             
        KC_NO,   KC_NO,   KC_NO,                              KC_NO,                     KC_NO,   KC_NO,   KC_NO
    )
};

/* Encoder */ 
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_NO, KC_NO) }
};

/* RGB Matrix */
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {                4,        9,       14,       18,       23,       28,             NO_LED                               },
  {      0,        5,       10,       15,       19,       24,       29,       33,       37,       40,       44,       48 },
  {      1,        6,       11,       16,       20,       25,       30,       34,       38,       41,       45,       49 },
  {      2,        7,       12,       17,       21,       26,       31,       35,       39,       42,       46,       50 },
  {      3,        8,       13,                 22,       27,       32,       36,                 43,       47,       51 }
}, {
  // LED Index to Physical Position
                {   0,  15 }, {   3,  30 }, {   8,  45 }, {   3,  60 },
  {  10,   0 }, {  19,  15 }, {  24,  30 }, {  33,  45 }, {  24,  60 },
  {  29,   0 }, {  38,  15 }, {  43,  30 }, {  52,  45 }, {  45,  60 },
  {  47,   0 }, {  57,  15 }, {  61,  30 }, {  71,  45 },
  {  66,   0 }, {  75,  15 }, {  80,  30 }, {  89,  45 }, {  82,  60 },
  {  85,   0 }, {  94,  15 }, {  99,  30 }, { 108,  45 }, { 115,  60 },
  { 103,   0 }, { 113,  15 }, { 118,  30 }, { 127,  45 }, { 129,  60 },
                { 132,  15 }, { 136,  30 }, { 146,  45 }, { 162,  60 },
                { 150,  15 }, { 155,  30 }, { 164,  45 },
                { 169,  15 }, { 174,  30 }, { 183,  45 }, { 183,  60 },
                { 188,  15 }, { 192,  30 }, { 202,  45 }, { 202,  60 },
                { 213,  15 }, { 216,  30 }, { 220,  45 }, { 220,  60 }
}, {
  // LED Index to Flag
     4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
     4, 4, 4, 4,
     4, 4, 4,
     4, 4, 4, 4,
     4, 4, 4, 4,
     4, 4, 4, 4
} };
