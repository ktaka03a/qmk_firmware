// Copyright 2022 ktaka03a (@ktaka03a)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"
#include <stdio.h>

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

#define SPLIT_HAND_PIN B5
#define SOFT_SERIAL_PIN D2
#define SPLIT_USB_DETECT

#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// #define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
// #define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }
// #define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define TAPPING_TOGGLE 2



