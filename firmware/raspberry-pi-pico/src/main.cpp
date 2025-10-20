// This file contains the main entry point for the Raspberry Pi Pico firmware.
// It includes setup and loop functions for initializing and running the application.

#include <Arduino.h>

void setup() {
    // Initialize serial communication for debugging
    Serial.begin(115200);
    while (!Serial) {
        ; // Wait for serial port to connect. Needed for native USB
    }
    Serial.println("Raspberry Pi Pico Firmware Initialized");
}

void loop() {
    // Main loop for the firmware
    // Add your code here to handle keystroke injection and debugging
}