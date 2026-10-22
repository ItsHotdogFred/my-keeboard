// Copyright 2026 Ryan
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    KC_ESC,              // SW2: ESC
    KC_F1,               // SW3: F1
    KC_F2,               // SW4: F2
    KC_F3,               // SW5: F3
    KC_F4,               // SW6: F4
    KC_F5,               // SW7: F5
    KC_F6,               // SW8: F6
    KC_F7,               // SW9: F7
    KC_F8,               // SW10: F8
    KC_F9,               // SW11: F9
    KC_F10,              // SW12: F10
    KC_EQL,              // SW15: =
    KC_F11,              // SW13: F11
    KC_F12,              // SW14: F12
    KC_F13,              // ENC1: MUTE_MIC // no native mic-mute keycode - remap to your mic-mute shortcut
    KC_GRV,              // SW16: `
    KC_1,                // SW17: 1
    KC_2,                // SW18: 2
    KC_3,                // SW19: 3
    KC_4,                // SW20: 4
    KC_5,                // SW21: 5
    KC_6,                // SW22: 6
    KC_7,                // SW23: 7
    KC_8,                // SW24: 8
    KC_9,                // SW25: 9
    KC_0,                // SW26: 0
    KC_MINS,             // SW27: -
    KC_BSPC,             // SW29: BACKSPACE
    KC_PSCR,             // SW86: PRT SC
    KC_MUTE,             // ENC2: MUTE_SOUND
    KC_TAB,              // SW30: TAB
    KC_Q,                // SW31: Q
    KC_W,                // SW32: W
    KC_E,                // SW33: E
    KC_R,                // SW34: R
    KC_T,                // SW35: T
    KC_Y,                // SW36: Y
    KC_U,                // SW37: U
    KC_I,                // SW38: I
    KC_O,                // SW39: O
    KC_P,                // SW40: P
    KC_LBRC,             // SW41: [
    KC_RBRC,             // SW42: ]
    KC_BSLS,             // SW43: backslash
    KC_INS,              // SW88: INS
    KC_CAPS,             // SW44: CAPSLOCK
    KC_A,                // SW45: A
    KC_S,                // SW46: S
    KC_D,                // SW47: D
    KC_F,                // SW48: F
    KC_G,                // SW49: G
    KC_H,                // SW50: H
    KC_J,                // SW51: J
    KC_K,                // SW52: K
    KC_L,                // SW53: L
    KC_SCLN,             // SW54: ;
    KC_QUOT,             // SW55: '
    KC_ENT,              // SW57: ENTER
    KC_DEL,              // SW94: DEL
    KC_PGDN,             // SW95: PG_DN
    KC_LSFT,             // SW58: LEFT_SHIFT
    KC_Z,                // SW60: Z
    KC_X,                // SW61: X
    KC_C,                // SW62: C
    KC_V,                // SW63: V
    KC_B,                // SW64: B
    KC_N,                // SW65: N
    KC_M,                // SW66: M
    KC_COMM,             // SW67: ,
    KC_DOT,              // SW68: .
    KC_SLSH,             // SW69: /
    KC_RSFT,             // SW71: RIGHT_SHIFT
    KC_UP,               // SW90: UP_ARROW
    LGUI(KC_DOT),        // SW87: WINDOWS_KEY_PLUS_PERIOD
    KC_PGUP,             // SW89: PG_UP
    KC_LCTL,             // SW72: CTRL
    KC_LGUI,             // SW73: WINDOWS_KEY
    KC_LALT,             // SW74: ALT
    KC_SPC,              // SW77: SPACEBAR
    KC_RALT,             // SW79: ALT
    KC_RGUI,             // SW80: WINDOWS_KEY
    MO(1),               // SW81: FN
    KC_RCTL,             // SW82: CTRL
    KC_LEFT,             // SW93: LEFT_ARROW
    KC_DOWN,             // SW91: DOWN_ARROW
    KC_RGHT              // SW92: RIGHT_ARROW
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif
