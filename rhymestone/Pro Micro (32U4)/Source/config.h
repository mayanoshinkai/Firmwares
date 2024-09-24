#pragma once

#define SOFT_SERIAL_PIN D2
#define EE_HANDS
#define SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_SPLIT { 20, 20 }

#define RGB_DI_PIN D3
#define DRIVER_LED_TOTAL 40
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100

#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS

#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE