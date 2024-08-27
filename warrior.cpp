#include "warrior.h"

Warrior::Warrior(string name, int health, int damage, string weapon)
    : Player(name, health,damage), weapon(weapon){}

void Warrior::swingWeapon(Player* opponent) {
    Player::attack(opponent,damage);
}