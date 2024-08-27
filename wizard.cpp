#include "wizard.h"

Wizard::Wizard(string name, int health, int damage, int mana)
    : Player(name,health,damage), mana(mana){}

void Wizard::castSpell(Player* opponent){
    Player::attack(opponent, mana);
}