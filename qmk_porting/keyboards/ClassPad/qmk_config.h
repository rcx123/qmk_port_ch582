/*
Copyright 2022 OctopusZ <https://github.com/OctopusZ>

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

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCAFE
#define PRODUCT_ID   0x0B9A
#define DEVICE_VER   0x0001
#define MANUFACTURER Class
#define PRODUCT      ClassPad

#define MATRIX_ROWS 5
#define MATRIX_COLS 7
#define MATRIX_ROW_PINS       \
    {                         \
        B9, B8, B17, B16, B18 \
    }
// for M2DK
// #define MATRIX_COL_PINS { A6, A0, A1, A2, A3, A15, A14}
// for ClassPad
#define MATRIX_COL_PINS            \
    {                              \
        A6, A0, A1, A2, B2, B3, B4 \
    }

#define DYNAMIC_KEYMAP_LAYER_COUNT 10

#define DIODE_DIRECTION       COL2ROW
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE

#define WS2812_EN_PIN   A5
#define WS2812_EN_LEVEL 1

#define BATTERY_MEASURE_PIN A4
#define POWER_DETECT_PIN    B12

#define BATTERY_INDICATOR_START_INDEX 0
#define BATTERY_INDICATOR_END_INDEX   3

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A \
    {                  \
        A3,A14         \
    }
#define ENCODERS_PAD_B \
    {                  \
        A15,A13        \
    }
#define ENCODER_RESOLUTION 1
#endif

#ifdef RGB_MATRIX_ENABLE

#define BLE_INDICATOR_PREFIX
#define BLE_SLOT_1_INDICATOR 0
#define BLE_SLOT_2_INDICATOR 1
#define BLE_SLOT_3_INDICATOR 2
#define BLE_SLOT_4_INDICATOR 3
#define RGB_MATRIX_KEYPRESSES
// #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE
#define WS2812_SPI_DRIVER             2
#define RGBLED_NUM                    4
#define RGB_MATRIX_LED_COUNT          RGBLED_NUM
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 32
#define RGB_MATRIX_STARTUP_VAL        RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_HUE_STEP           10
#define RGB_MATRIX_SAT_STEP           8
#define RGB_MATRIX_VAL_STEP           4
#define RGB_MATRIX_SPD_STEP           10
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#endif
#ifdef RGB_RAW_ENABLE
#define AUXILIARY_RGB_USE_UNIVERSAL_BRIGHTNESS
#endif

/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

#define DIP_SWITCH_PINS \
    {                   \
        B0, B1          \
    }
