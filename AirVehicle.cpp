// AirVehicle.cpp

#include "AirVehicle.h"

AirVehicle::AirVehicle() : weight(0), fuel(100.0), numberOfFlights(0) {}

AirVehicle::AirVehicle(int w) : weight(w), fuel(100.0), numberOfFlights(0) {}

int AirVehicle::getWeight() const { return weight; }

float AirVehicle::getFuel() const { return fuel; }

int AirVehicle::getNumberOfFlights() const { return numberOfFlights; }

void AirVehicle::setWeight(int w) { weight = w; }

void AirVehicle::setFuel(float f) {
  if (f >= 0 && f <= 100) {
    fuel = f;
  }
}

void AirVehicle::refuel() { fuel = 100.0; }

void AirVehicle::fly(int headwind, int minutes) { numberOfFlights++; }
