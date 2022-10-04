/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
//#define TAPPING_TERM 100

/* #define CONSOLE_ENABLE yes */

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

/* uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) { */
/*   switch (keycode) { */
/*     case LSFT_T(KC_ESC): */
/*       return 100; */
/*     case RSFT_T(KC_DEL): */
/*       return 100; */
/*     default: */
/*       return TAPPING_TERM; */
/*   } */
/* } */

#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Left-hand home row mods
#define HSFT_A LSFT_T(KC_A)
#define HCTL_R LCTL_T(KC_R)
#define HGUI_S LGUI_T(KC_S)
#define HALT_T LALT_T(KC_T)

// Right-hand home row mods
#define HALT_N RALT_T(KC_N)
#define HGUI_E LGUI_T(KC_E)
#define HCTL_I RCTL_T(KC_I)
#define HSFT_O RSFT_T(KC_O)

// Mouse settings
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MOUSEKEY_MAX_SPEED 6
#define MOUSEKEY_WHEEL_MAX_SPEED 6

#define MK_C_OFFSET_0    8
#define MK_C_INTERVAL_0 16
#define MK_C_OFFSET_1   16
#define MK_C_INTERVAL_1 16
#define MK_C_OFFSET_2    4
#define MK_C_INTERVAL_2 16

#define MK_W_OFFSET_0     1
#define MK_W_INTERVAL_0 120
#define MK_W_OFFSET_1     1
#define MK_W_INTERVAL_1  60
#define MK_W_OFFSET_2     1
#define MK_W_INTERVAL_2  20
