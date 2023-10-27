#include "GameSession.h"

int main() {
    GameSession game;

    int numAvatars = 1;
    int numObstacles = 5;
    int gridWidth = 10;
    int gridHeight = 10;
    double obstacleActivationDistance = 1.5;

    game.initGameSession(numAvatars, numObstacles, gridWidth, gridHeight);
    game.gameCycle(50, obstacleActivationDistance);

    return 0;
}
