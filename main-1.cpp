#include <iostream>
#include "GridUnit.h"
#include "Helper.h"

int main() {
    GridUnit unit(5, 5, 'X');
    std::cout << "Initial coordinates: (" << std::get<0>(unit.getCoordinates()) << ", " << std::get<1>(unit.getCoordinates()) << ")\n";
    std::cout << "Entity: " << unit.getEntity() << "\n";

    auto coords = Helper::generateRandomCoordinates(10, 10);
    std::cout << "Random coordinates: (" << std::get<0>(coords) << ", " << std::get<1>(coords) << ")\n";

    double distance = Helper::calculateDistance(unit.getCoordinates(), coords);
    std::cout << "Distance from unit to random coordinates: " << distance << "\n";

    return 0;
}
