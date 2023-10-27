#include <iostream>
#include "Obstacle.h"
#include "Avatar.h"
#include "Helper.h"

int main() {
    Avatar avatar(5, 5);
    Obstacle obstacle(6, 5);
    std::cout << "Initial coordinates of Avatar: (" << std:: get<0>(avatar.getCoordinates()) << ", " << std::get<1>(avatar.getCoordinates()) << ")\n";
    avatar.shift(1, 0);
    std::cout << "Avatar Shifted Coordinates: (" << std::get<0>(avatar.getCoordinates()) << ", " << std::get<1>(avatar.getCoordinates()) << ")\n";

    if(Helper::calculateDistance(avatar.getCoordinates(), obstacle.getCoordinates()) ==1) {
        obstacle.apply(avatar);
        std::cout << "Obstacle has modified the Avatar!\n";
    }


    return 0;
}
