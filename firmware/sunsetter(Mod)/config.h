/*
Copyright 2020 Michael Pio "Coarse" Mayol  <mfmayol@up.edu.ph>

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
#define VENDOR_ID       0x4344 // CD for CharueDesign
#define PRODUCT_ID      0x5353 // SS for Sunsetter
#define DEVICE_VER      0x0001 // Revision prototype
#define MANUFACTURER    CharueDesign
#define PRODUCT         Sunsetter

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 18

#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { F7, C7, C6, D7, D6, D5, D4, D3, D2, D1, D0, B7, B6, B5, B4, B3, B2, B1 }
#define DIODE_DIRECTION ROW2COL
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define LED_CAPS_LOCK_PIN B0
#define LED_PIN_ON_STATE 0
