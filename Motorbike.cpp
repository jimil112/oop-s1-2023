#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}


int Motorbike::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int Timeduration = static_cast<int>(currentTime - EntryTime);
    return static_cast<int>(Timeduration * 0.85); // Apply 15% reduction
}