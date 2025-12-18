#ifndef ALARM_H_INCLUDED
#define ALARM_H_INCLUDED

#include <iostream>
#include "Observer.h"

// Alarm observer: reacts when danger is detected
class Alarm : public Observer {
public:
    virtual void update(const std::string& msg) {
        (void)msg; // unused parameter
        std::cout << "[ALARM] Danger detected! Alarm is ON!" << std::endl;
    }
};

#endif // ALARM_H_INCLUDED
