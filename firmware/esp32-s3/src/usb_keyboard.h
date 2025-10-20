// usb_keyboard.h
#ifndef USB_KEYBOARD_H
#define USB_KEYBOARD_H

#include <Arduino.h>
#include <USB.h>
#include <usbhub.h>

class USBKeyboard {
public:
    USBKeyboard();
    void begin();
    void sendKey(uint8_t key);
    void sendString(const char* str);
    void end();

private:
    USB usb;
    USBHub hub;
};

#endif // USB_KEYBOARD_H