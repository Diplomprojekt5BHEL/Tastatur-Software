#include QMK_KEYBOARD_H

void board_init(void) {
    setPinOutput(B9);
    writePinLow(B9);
}