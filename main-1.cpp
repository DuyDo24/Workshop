#include <iostream>
#include <ctime>
#include "GameEntity.h"
#include "Utils.h"

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed for random number generation

    // Grid dimensions
    int gridWidth = 100;
    int gridHeight = 100;

    // Generate random positions for two game entities
    std::tuple<int, int> pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

    // Create two GameEntity objects with random positions
    GameEntity entity1(std::get<0>(pos1), std::get<1>(pos1), ExplosionType);
    GameEntity entity2(std::get<0>(pos2), std::get<1>(pos2), ShipType);

    // Output the positions and types
    std::cout << "Entity 1 - Position: (" << std::get<0>(entity1.getPos()) << ", " << std::get<1>(entity1.getPos()) 
              << ") Type: " << entity1.getType() << std::endl;

    std::cout << "Entity 2 - Position: (" << std::get<0>(entity2.getPos()) << ", " << std::get<1>(entity2.getPos()) 
              << ") Type: " << entity2.getType() << std::endl;

    // Calculate and output the distance between the two entities
    double distance = Utils::calculateDistance(entity1.getPos(), entity2.getPos());
    std::cout << "Distance between Entity 1 and Entity 2: " << distance << std::endl;

    return 0;
}
