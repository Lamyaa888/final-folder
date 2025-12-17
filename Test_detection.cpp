#include <iostream>
#include "SmokeDetector.h"
#include "Alarm.h"
#include "LightObserver.h"
#include "LoggerObserver.h"
#include "FireStationObserver.h"

int main() {

    std::cout << "Detection system initialized...\n";
    std::cout << "Waiting for smoke/gas events...\n\n";

    // Create detector with sensitivity
    SmokeDetector detector(5);

    // Create observers
    Alarm alarm;
    LightObserver lights;
    LoggerObserver logger;
    FireStationObserver fire;

    // Attach observers
    detector.attach(&alarm);
    detector.attach(&lights);
    detector.attach(&logger);
    detector.attach(&fire);

    std::cout << "[TEST] Simulating smoke detection...\n";

    // Simulate smoke level
    detector.smokeLevel = 10.0f;

    // Trigger detection
    detector.detectEvent();

    // Final state check
    std::cout << "\n[STATE CHECK]\n";
    std::cout << "Alarm triggered? "
              << (alarm.isTriggered ? "YES" : "NO")
              << std::endl;

    std::cout << "\nDetection sequence finished.\n";

    return 0;
}