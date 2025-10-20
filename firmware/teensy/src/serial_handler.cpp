// This file contains the implementation of the serial handler for Teensy platform.
// It manages serial communication for controlled keystroke injection.

#include "serial_handler.h"

// Initialize serial communication
void initSerial() {
    Serial.begin(115200); // Set baud rate to 115200
}

// Read data from serial
int readSerial() {
    if (Serial.available()) {
        return Serial.read(); // Return the byte read from serial
    }
    return -1; // Return -1 if no data is available
}

// Write data to serial
void writeSerial(int data) {
    Serial.write(data); // Write the byte to serial
}