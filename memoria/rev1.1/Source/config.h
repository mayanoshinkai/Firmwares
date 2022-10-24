/*
Copyright 2022 Mayano Shinkai

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x548C
#define PRODUCT_ID   0x0003
#define DEVICE_VER   0x0001
#define MANUFACTURER Mayano Shinkai
#define PRODUCT      Memoria

/* Key Matrix Size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* Memoria PCB default pin-out */
#define MATRIX_ROW_PINS { D0, B3, B1, B0, F7 }
#define MATRIX_COL_PINS { B5, B6, C6, F6, C7, D5, D3, B7, D4, D6, D7, B4 }
#define UNUSED_PINS { F5, D2, B2 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
//#define DEBOUNCE 0

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* WS2812 LEDs */
//#define RGBLIGHT_LAYERS
//#define RGB_DI_PIN F4
//#define RGBLED_NUM 3

/* RGB Breakout */
//#define RGB_DI_PIN D1
//#define DRIVER_LED_TOTAL ?


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

