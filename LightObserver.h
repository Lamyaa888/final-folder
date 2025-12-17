#ifndef LIGHTOBSERVER_H
#define LIGHTOBSERVER_H

#include "Observer.h"

class LightObserver : public Observer {
public:
    void update() override {
        // simulate blinking lights
    }
};

#endif
