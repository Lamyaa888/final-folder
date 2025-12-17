# Detection System (Smoke/Gas) – My Sweet Home (MSH)

**Name:** Lamyaa Ahmed Guled  
**Course:** CENG-464 – Design Patterns with C++  
**Subsystem:** Detection System (Smoke/Gas)  
**Design Pattern:** Observer Pattern  

---

## 1. Overview
The Detection System is responsible for detecting abnormal smoke or gas levels inside the smart home.
When a dangerous condition is detected, the system triggers reactions through the Observer Pattern.

This module is designed to be modular, loosely coupled, and ready for integration with the full My Sweet Home system.

---

## 2. Design Pattern Used
### Observer Pattern
- `Detector` acts as the **Subject**
- `Alarm`, `Light`, `Logger`, and `FireStation` act as **Observers**
- Observers are notified automatically when a detection event occurs

This design allows multiple components to react to the same event without tight coupling.

---

## 3. System Behavior
When smoke or gas exceeds the sensitivity threshold:
1. The detector identifies a danger event
2. Observers are notified
3. Reactions are executed sequentially:
   - Alarm is triggered
   - Light is activated
   - FireStation is notified (simulation)

---

## 4. UML & Implementation Consistency
- The implementation directly matches the UML design
- The Observer Pattern is explicitly modeled using `Subject` and `Observer` interfaces
- No changes were made to other subsystems

---

## 5. How to Run
This module can be compiled and executed independently.

```bash
g++ *.cpp -o DetectionSystem
./DetectionSystem