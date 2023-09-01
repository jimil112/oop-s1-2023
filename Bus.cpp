#include "Bus.h"

Bus::Bus(int id) : Vehicle(id){};

int Bus::getParkingDuration() const {
  std::time_t Time = std::time(nullptr);
  int TimeDuration = static_cast<int>(Time - EntryTime);
  return static_cast<int>(TimeDuration * 0.75);
}
