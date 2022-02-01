/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

/* Change USB Descriptor for fun */
#undef VENDOR_ID
#define VENDOR_ID       0x5151 // "QQ"
#undef PRODUCT_ID
#define PRODUCT_ID      0x5244 // "RD"
#undef DEVICE_VER
#define DEVICE_VER      0x0100
#undef MANUFACTURER
#define MANUFACTURER    quq
#undef PRODUCT
#define PRODUCT         Redox Keyboard

/* Use I2C for comunication */
#define USE_I2C

/* Read handedness from EEPROM */
#define EE_HANDS

/* Remove Cherry MX Lock Support */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* Use 8 bit to track layer */
#define LAYER_STATE_8BIT

/* Enable per-key tap duration */
#define TAPPING_TERM_PER_KEY
