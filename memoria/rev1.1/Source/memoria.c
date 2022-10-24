/* Copyright 2022 Mayano Shinkai
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "memoria.h"

#define led1 E6
#define led2 F0
#define led3 F1

void matrix_init_user(void) {
    setPinOutput(led1);
    writePinLow(led1);
    setPinOutput(led2);
    writePinLow(led2);
    setPinOutput(led3);
    writePinLow(led3);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    writePinLow(led1);
    writePinLow(led2);
    writePinLow(led3);
    switch (get_highest_layer(state)) {
    case 1:
        writePinHigh(led1);
        break;
    case 2:
        writePinHigh(led2);
        break;
    case 3:
        writePinHigh(led3);
        break;
    }
    return state;
}