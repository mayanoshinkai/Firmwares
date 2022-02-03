/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#define VIAL_KEYBOARD_UID {0x72, 0xA2, 0xEB, 0x43, 0xA9, 0x96, 0x03, 0x24}

#define VIAL_UNLOCK_COMBO_ROWS { 1, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 9 }

/* Rotary Encoder */
#define ENCODERS_PAD_A { D3 }
#define ENCODERS_PAD_B { D2 }
#define VIAL_ENCODER_KEYCODE_DELAY 10

/* Midi Stuff */
#define MIDI_ADVANCED

/* Rhythm Games */
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12