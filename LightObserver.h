
#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED

#include <iostream>
#include "Observer.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h> // usleep
#endif

// Light observer: blinks when danger is detected
class Light : public Observer {
public:
    virtual void update(const std::string& msg) {
        (void)msg; // unused parameter
        std::cout << "[LIGHT] Blinking... Danger detected!" << std::endl;

#ifdef _WIN32
        Sleep(1000);        // 1 second (Windows)
#else
        usleep(1000000);   // 1 second (Linux/macOS)
#endif
    }
};

#endif // LIGHT_H_INCLUDED
