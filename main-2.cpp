#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    // Create a Ship and Mine object
    Ship ship(10, 20);
    Mine mine(5, 15);

    // Move the ship by (5, 5)
    ship.move(5, 5);
    std::cout << "Ship's new position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;

    // Explode the mine and create an Explosion
    Explosion explosion = mine.explode();
    std::cout << "Mine exploded and its type is now: " << mine.getType() << std::endl;

    // Apply the explosion to the ship
    explosion.apply(ship);
    std::cout << "Ship after explosion - position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")"
              << ", type: " << ship.getType() << std::endl;

    return 0;
}
