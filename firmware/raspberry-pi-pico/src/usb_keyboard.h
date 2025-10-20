// usb_keyboard.h
#ifndef USB_KEYBOARD_H
#define USB_KEYBOARD_H

#include <stdint.h>

// USB Keyboard report structure
typedef struct {
    uint8_t modifier; // Modifier keys (Ctrl, Shift, etc.)
    uint8_t reserved; // Reserved for future use
    uint8_t keycode[6]; // Keycodes for pressed keys
} usb_keyboard_report_t;

// Function to send a keyboard report
void send_keyboard_report(usb_keyboard_report_t* report);

// Function to initialize USB keyboard
void usb_keyboard_init(void);

#endif // USB_KEYBOARD_H