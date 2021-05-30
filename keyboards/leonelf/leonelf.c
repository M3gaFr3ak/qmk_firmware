/*
Copyright 2020 Álvaro "Gondolindrim" Volpato  <gondolindrim@acheronproject.com>

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

#include "leonelf.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 },
  { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31 },
  {49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, NO_LED },
  {82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65 },
  {83, 84, 85, NO_LED, NO_LED, 86, NO_LED, 87, NO_LED, 88, 89, 90, 91, 92, 93, 94, 95, NO_LED }
}, {
  // LED Index to Physical Position
  {167, 5}, {155, 5}, {144, 5}, {132, 5}, {113, 5}, {102, 5}, {90, 5}, {79, 5}, {59, 5}, {48, 5}, {36, 5}, {25, 5}, {6, 5}, {6, 17}, {17, 17}, {29, 17}, {40, 17}, {52, 17}, {63, 17}, {75, 17}, {86, 17}, {98, 17}, {109, 17}, {121, 17}, {132, 17}, {144, 17}, {161, 17}, {184, 17}, {195, 17}, {207, 17}, {218, 17}, {218, 32}, {207, 27}, {195, 27}, {184, 27}, {165, 32}, {149, 27}, {138, 27}, {126, 27}, {115, 27}, {103, 27}, {92, 27}, {80, 27}, {69, 27}, {57, 27}, {46, 27}, {34, 27}, {23, 27}, {9, 27}, {10, 37}, {26, 37}, {37, 37}, {49, 37}, {60, 37}, {72, 37}, {83, 37}, {95, 37}, {106, 37}, {118, 37}, {129, 37}, {141, 37}, {152, 37}, {184, 37}, {195, 37}, {207, 37}, {218, 52}, {207, 47}, {195, 47}, {184, 47}, {169, 49}, {151, 47}, {135, 47}, {123, 47}, {112, 47}, {101, 47}, {89, 47}, {78, 47}, {66, 47}, {55, 47}, {43, 47}, {32, 47}, {20, 47}, {7, 47}, {9, 57}, {23, 57}, {37, 57}, {68, 57}, {86, 57}, {104, 57}, {123, 57}, {138, 57}, {158, 59}, {169, 59}, {181, 59}, {195, 57}, {207, 57}, {213, 42}, {209, 32}, {213, 20}, {213, 12}, {188, 12}, {163, 12}, {139, 12}, {114, 12}, {89, 12}, {65, 12}, {40, 12}, {15, 12}, {12, 20}, {15, 31}, {15, 42}, {13, 52}, {40, 52}, {65, 52}, {90, 52}, {114, 52}, {139, 52}, {163, 52}, {188, 52}, {211, 52}, {195, 5}, {201, 5}, {207, 5}

}, {
  // LED Index to Flag
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_INDICATOR, LED_FLAG_INDICATOR, LED_FLAG_INDICATOR
} };