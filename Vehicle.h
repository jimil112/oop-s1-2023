#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
using namespace std;

class Vehicle {
 protected:
  time_t EntryTime;
  int ID;

 public:
  Vehicle(int id);
  virtual int getParkingDuration() const = 0;  // Make this virtual
  int getID() const;
};

#endif  // VEHICLE_H
