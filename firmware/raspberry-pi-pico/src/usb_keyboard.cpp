// usb_keyboard.cpp
#include "usb_keyboard.h"

// Initialize the USB keyboard
void setup() {
    // Initialize USB
    USB.begin();
}

// Main loop to handle keyboard input
void loop() {
    // Check for input and send keystrokes
    if (USB.available()) {
        char key = USB.read();
        USB.sendKey(key);
    }
}