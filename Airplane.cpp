// Airplane.cpp

#include "Airplane.h"


Airplane::Airplane() : AirVehicle(), numPassengers(0) {}


Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}


int Airplane::getNumPassengers() const {
    return numPassengers;
}


void Airplane::reducePassengers(int x) {
    if (x >= 0) {
        numPassengers -= x;
    }
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}


void Airplane::fly(int headwind, int minutes) {
   
    float fuelUsagePerMinute = 0.25;

    if (headwind >= 60) {
        fuelUsagePerMinute = 0.5;
    }

    float extraFuel = 0.001 * numPassengers;


    float fuelReduction = fuelUsagePerMinute * minutes + extraFuel * minutes;

 
    if (getFuel() - fuelReduction >= 20.0) {
       
        setFuel(getFuel() - fuelReduction);
        AirVehicle::fly(headwind, minutes); 
    }
}
