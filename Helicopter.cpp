// Helicopter.cpp

#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}

std::string Helicopter::getName() const { return name; }

void Helicopter::setName(const std::string& n) { name = n; }

void Helicopter::fly(int headwind, int minutes) {
  float fuelUsagePerMinute = 0.18;

  if (headwind >= 40) {
    fuelUsagePerMinute = 0.4;
  }

  int extraWeight = getWeight() - 5670;
  if (extraWeight > 0) {
    fuelUsagePerMinute += 0.01 * extraWeight;
  }

  float fuelReduction = fuelUsagePerMinute * minutes;

  if (getFuel() - fuelReduction >= 20.0) {
    setFuel(getFuel() - fuelReduction);
    AirVehicle::fly(headwind, minutes);
  }
}
