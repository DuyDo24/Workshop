#include <iostream>
#include "Game.h"

int main() {
    // Create a Game object
    Game game;

    // Initialize the game with 3 ships, 2 mines on a 100x100 grid
    game.initGame(3, 2, 100, 100);

    // Simulate the game loop with 10 iterations and a mine detection threshold of 5.0 units
    game.gameLoop(10, 5.0);

    return 0;
}
