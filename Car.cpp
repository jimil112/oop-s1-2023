#include "Car.h"

Car::Car(int id) : Vehicle(id){};

int Car::getParkingDuration() const {
  std::time_t Time = std::time(nullptr);
  int Timeduration = static_cast<int>(Time - EntryTime);
  return static_cast<int>(Timeduration * 0.9);
}
