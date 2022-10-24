// Copyright 2022 Shinkai Mayano (@Shinkai Mayano)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ENCODERS_PAD_A { GP0 }
#define ENCODERS_PAD_B { GP1 }

#define MIDI_ADVANCED

#define ENCODER_RESOLUTION 2

/*OLED Pins (GP2 & GP3) are shared with the RGB Pin (GP2).*/

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
