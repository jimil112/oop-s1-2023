// main-2-2.cpp

#include <iostream>
#include "Airplane.h"

int main() {
    
    Airplane airplane(10000, 100);

   
    int headwind = 65;
    int minutes = 120;
    airplane.fly(headwind, minutes);

    
    int numPassengers = airplane.get_numPassengers();
    int weight = airplane.get_weight();
    float fuel = airplane.get_fuel();
    int numberOfFlights = airplane.get_numberOfFlights();

    return 0;
}
