// AirVehicle.h

#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
 public:
  AirVehicle();

  AirVehicle(int w);

  int getWeight() const;
  float getFuel() const;
  int getNumberOfFlights() const;

  void setWeight(int w);
  void setFuel(float f);

  void refuel();
  virtual void fly(int headwind, int minutes);

 private:
  int weight;
  float fuel;
  int numberOfFlights;
};

#endif
