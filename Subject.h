#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include "Observer.h"

class Subject {
protected:
    std::vector<Observer*> observers;

public:
    void attach(Observer* o) {
        observers.push_back(o);
    }

    void notify() {
        for (int i = 0; i < observers.size(); i++) {
            observers[i]->update();
        }
    }
};

#endif
