// Helicopter.h

#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <string>

#include "AirVehicle.h"

class Helicopter : public AirVehicle {
 public:
  Helicopter(int w, std::string n);

  std::string getName() const;

  void setName(const std::string& n);

  void fly(int headwind, int minutes) override;

 private:
  std::string name;
};

#endif
