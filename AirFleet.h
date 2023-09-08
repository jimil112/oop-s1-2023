// AirFleet.h

#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"

class AirFleet {
public:
    AirFleet();
    ~AirFleet();

    AirVehicle** get_fleet() const;

private:
    AirVehicle** fleet;
};

#endif
