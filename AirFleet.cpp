// AirFleet.cpp

#include "AirFleet.h"
#include "Airplane.h"
#include "Helicopter.h"

AirFleet::AirFleet() {
   
    fleet[0] = new Airplane(20, 10);
    fleet[1] = new Helicopter(10000, "BlackHawk");
    fleet[2] = new AirVehicle(5000);
    fleet[3] = new Helicopter(100, "WhiteHawk");
    fleet[4] = new Airplane(15, 20);
}

AirVehicle** AirFleet::get_fleet() {
    return fleet;
}
