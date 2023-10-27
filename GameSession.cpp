#include "GameSession.h"

void GameSession::initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
    grid.clear();

    for (int i = 0; i < numAvatars; ++i) {
        auto loc = Helper::generateRandomCoordinates(gridWidth, gridHeight);
        grid.push_back(new Avatar(std::get<0>(loc), std::get<1>(loc)));
    }

    for (int i = 0; i < numObstacles; ++i) {
        auto loc = Helper::generateRandomCoordinates(gridWidth, gridHeight);
        grid.push_back(new Obstacle(std::get<0>(loc), std::get<1>(loc)));
    }
}

void GameSession::gameCycle(int maxCycles, double obstacleActivationDistance) {
    int cycles = 0;
    while (cycles < maxCycles) {
        for (GridUnit* unit : grid) {
            if (unit->getEntity() == 'A') {
                Avatar* avatar = static_cast<Avatar*>(unit);
                avatar->shift(1, 0);

                if (std::get<0>(avatar->getCoordinates()) > static_cast<int>(grid.size())) {
                    std::cout << "Avatar has won the game!" << std::endl;
                    return;
                }

                for (GridUnit* checkUnit : grid) {
                    if (checkUnit->getEntity() == 'O') {
                        Obstacle* obstacle = static_cast<Obstacle*>(checkUnit);
                        if (obstacle->isActive() && Helper::calculateDistance(avatar->getCoordinates(), obstacle->getCoordinates()) <= obstacleActivationDistance) {
                            obstacle->apply(*avatar);
                        }
                    }
                }
            }
        }

        cycles++;
    }

    std::cout << "Maximum number of cycles reached. Game over." << std::endl;
}
