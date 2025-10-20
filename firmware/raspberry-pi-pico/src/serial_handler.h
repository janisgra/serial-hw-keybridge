// serial_handler.h
#ifndef SERIAL_HANDLER_H
#define SERIAL_HANDLER_H

#include <Arduino.h>

class SerialHandler {
public:
    SerialHandler();
    void begin(long baudRate);
    void sendKeystroke(char key);
    char receiveKeystroke();
    bool isDataAvailable();

private:
    void handleError(const char* errorMessage);
};

#endif // SERIAL_HANDLER_H