#ifndef BIKE_H
#define BIKE_H

#include <string>

class Bike {
 public:
  Bike();
  Bike(std::string brand, int code);
  std::string getBrand();
  int getCode();
  ~Bike();

 private:
  std::string brand;
  int code;
};

#endif  // BIKE_H
