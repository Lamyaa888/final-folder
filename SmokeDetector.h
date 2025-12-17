#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H

#include "Detector.h"

class SmokeDetector : public Detector {
public:
    float smokeLevel;

    SmokeDetector(int s = 5)
        : Detector(s), smokeLevel(0.0f) {}

    void detectEvent() override {
        if (isActive && smokeLevel > sensitivity) {
            notify();
        }
    }
};

#endif
