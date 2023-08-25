#include <iostream>

#include "Bike.h"

int main() {
  Bike defaultBike;
  std::cout << "The Default Bike Brand is: " << defaultBike.getBrand()
            << ", Code: " << defaultBike.getCode() << "\n";

  Bike myBike("Radical Bikes", 88);
  std::cout << "My Bike Brand: " << myBike.getBrand()
            << ", Code: " << myBike.getCode() << "\n";

  return 0;
}
