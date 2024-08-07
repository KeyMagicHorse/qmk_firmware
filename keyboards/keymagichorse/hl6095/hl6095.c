/* Copyright 2024 keymagichorse
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
#include "quantum.h"
#include"bhq.h"
void board_init(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) 
{
    switch (keycode) {
        case OU_BT:
            if(record->event.pressed)
            {
                bhq_SetPairingMode(0,10);
            }
            break;
    }
    return true;
}
#ifdef RGBLIGHT_ENABLE



bool led_update_kb(led_t led_state) {
    return true;
}

void keyboard_post_init_kb(void) {
}

#endif
