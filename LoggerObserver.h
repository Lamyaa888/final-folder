#ifndef LOGOBSERVER_H_INCLUDED
#define LOGOBSERVER_H_INCLUDED

#include <iostream>
#include "Observer.h"

// Logger observer: logs detection events
class LogObserver : public Observer {
public:
    virtual void update(const std::string& msg) {
        std::cout << "[LOGGER] Log entry: " << msg << std::endl;
    }
};

#endif // LOGOBSERVER_H_INCLUDED
