#ifndef LOGGEROBSERVER_H
#define LOGGEROBSERVER_H

#include "Observer.h"

class LoggerObserver : public Observer {
public:
    void update() override {
        // simulate logging
    }
};

#endif
