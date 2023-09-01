#include <iostream>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
using namespace std;

int main() {
  ParkingLot parkingLot(10);

  int choice;
  do {
    cout << "Selelct the vehicle time you wish to park (1 - Car, 2 - Bus, 3- "
            "Motorbike, 0 - Exit): ";
    cin >> choice;

    if (choice == 1) {
      parkingLot.parkVehicle(new Car(parkingLot.getCount() + 1));

    } else if (choice == 2) {
      parkingLot.parkVehicle(new Bus(parkingLot.getCount() + 1));

    } else if (choice == 3) {
      parkingLot.parkVehicle(new Motorbike(parkingLot.getCount() + 1));
    }

  } while (choice != 0 && parkingLot.getCount() < parkingLot.getMaxCapacity());

  int maximum_parking_duration = 15;

  int overstaying_count =
      parkingLot.countOverstayingVehicles(maximum_parking_duration);
  cout << " The Number of vehicles overstaying for more than"
       << maximum_parking_duration << "seconds: " << overstaying_count << endl;

  return 0;
}