
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x2133
#define DEVICE_VER      0x0200
#define MANUFACTURER    treyG
#define PRODUCT         trey Macropad
#define DESCRIPTION     2x3 Macropad with Rotary Encoder

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 6

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D1, D0, F6, D4, C6, D7 }  \

}

// Left, Right, Middle
#define ENCODERS_PAD_A { B4, B0, B5 }
#define TAP_CODE_DELAY 10


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
