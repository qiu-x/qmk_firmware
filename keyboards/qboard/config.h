// Copyright 2024 Qiu (@Qiu)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DEBOUNCE 10
// #define MATRIX_HAS_GHOST


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

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
#define MK_C_OFFSET_UNMOD 4
#define MK_C_INTERVAL_UNMOD 16
#define MK_C_OFFSET_0 2
#define MK_C_INTERVAL_0 32
#define MK_C_OFFSET_1 8
#define MK_C_INTERVAL_1 16
#define MK_C_OFFSET_2 16
#define MK_C_INTERVAL_2 16
