#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "GridUnit.h"
#include "Modifier.h"

class Obstacle : public GridUnit, public Modifier {
private:
    bool active;

public: 
    Obstacle(int x, int y) : GridUnit(x, y, '0'), active(true) {}
   
    bool isActive() const {
        return active;
    }
   
   void apply(GridUnit& unit) override {
        if (active) {
            unit.setEntity('0');
            active = false;
        }
   }
};

#endif
