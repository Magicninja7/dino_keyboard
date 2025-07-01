#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BL: Base Layer (Default Layer)
     */

    [_BL] = LAYOUT(\
        KC_F8,  KC_F9,  KC_10,  KC_DOWN,    KC_RIGHT,   KC_KB_POWER,    KC_RIGHT_BRACKET,   KC_BACKSLASH,   KC_PAGE_DOWN,   KC_F12, KC_KP_EQUAL, KC_PAGE_UP,\
        KC_F2,  KC_F3,  KC_F6,  KC_F7,  KC_ESC, KC_F5,  KC_DELETE,  KC_WWW_SEARCH,   KC_PRINT_SCREEN,   KC_HOME,    KC_UP,  KC_KP_1,\
        KC_NONUS_HASH,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0, KC_MINUS,\
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LEFT_BRACKET,\
        KC_CAPS_LOCK,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SEMICOLON,   KC_QUOTE,\
        KC_LEFT_SHIFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMMA,   KC_DOT, KC_SLASH,   KC_LEFT,\
        KC_LEFT_CTRL,   KC_CONTROL_PANEL,   KC_LEFT_GUI,    KC_LEFT_ALT, KC_SPACE, KC_RIGHT_SHIFT, KC_RIGHT_CTRL, KC_SELECT, KC_UNDO, KC_COPY, KC_PASTE, KC_FIND\
    )
};
