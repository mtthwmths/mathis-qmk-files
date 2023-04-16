/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2013 Oleg Kostyuk <cub.uanic@gmail.com>
Copyright 2017 Erin Call <hello@erincall.com>

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

/*
 you ever want bongocat on an oled?
 yeah, I thought so.
*/
#define OLED_DISPLAY_128X64

/* where are your diodes
 diodes blocking flow from active row: COL2ROW
 diodes blocking flow from active column: ROW2COL
*/
#define DIODE_DIRECTION COL2ROW

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 12

/* copied from handwired/dactyl/config.h */
#define COL_EXPANDED { true, true, true, true, true, true, false, false, false, false, false, false}
// Row0, Row1, Row2, Row3, Row4, Row5 pins on the ProMicro
#define MATRIX_ONBOARD_ROW_PINS { PD4, PC6, PD7, PE6, PB4, PB5 }
// of the 12 columns, only the first 6 (on the left hand side) are wired directly to the pro micro
#define MATRIX_ONBOARD_COL_PINS { PB2, PB3, PB1, PF7, PF6, PF5, 0, 0, 0, 0, 0, 0 }
#define EXPANDER_COL_REGISTER GPIOB
#define EXPANDER_ROW_REGISTER GPIOA
// TODO: I have the cols backwards on the io expander
#define MATRIX_EXPANDER_COL_PINS {5, 4, 3, 2, 1, 0}
#define MATRIX_EXPANDER_ROW_PINS {0, 1, 2, 3, 4, 5}

#define MOUSEKEY_INTERVAL     20
#define MOUSEKEY_DELAY        0
#define MOUSEKEY_TIME_TO_MAX  60
#define MOUSEKEY_MAX_SPEED    7
#define MOUSEKEY_WHEEL_DELAY  0

#define TAPPING_TOGGLE  1

#define TAPPING_TERM    200
// IGNORE_MOD_TAP_INTERRUPT is deprecated
// #define IGNORE_MOD_TAP_INTERRUPT // this makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)

/* key combination for command */
#define IS_COMMAND() ( \
    get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL)) || \
    get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) \
)

/* fix space cadet rollover issue */
#define DISABLE_SPACE_CADET_ROLLOVER

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    15

#define USB_MAX_POWER_CONSUMPTION 500
