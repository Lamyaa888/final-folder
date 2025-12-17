#include <iostream>
#include "SmokeDetector.h"
#include "Alarm.h"
#include "LightObserver.h"
#include "LoggerObserver.h"
#include "FireStationObserver.h"

int main() {
    SmokeDetector detector(5);

    Alarm alarm;
    LightObserver lights;
    LoggerObserver logger;
    FireStationObserver fire;

    detector.attach(&alarm);
    detector.attach(&lights);
    detector.attach(&logger);
    detector.attach(&fire);

    detector.smokeLevel = 10.0f;
    detector.detectEvent();

    std::cout << "Alarm triggered? "
              << (alarm.isTriggered ? "YES" : "NO")
              << std::endl;

    return 0;
}
