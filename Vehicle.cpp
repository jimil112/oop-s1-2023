#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(int id) : ID(id) {
    EntryTime = time(nullptr);
}

int Vehicle::getID() const {
    return ID;
}

