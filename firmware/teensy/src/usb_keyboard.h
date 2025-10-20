// This file defines the USB keyboard functionality for the Teensy microcontroller. 
// It includes necessary headers and function declarations for keyboard operations.

#ifndef USB_KEYBOARD_H
#define USB_KEYBOARD_H

#include <Arduino.h>
#include <USBKeyboard.h>

// Initialize the USB keyboard
void initUSBKeyboard();

// Send a keystroke
void sendKeystroke(uint8_t key);

// Send a string of characters
void sendString(const char* str);

// Release all keys
void releaseAllKeys();

#endif // USB_KEYBOARD_H