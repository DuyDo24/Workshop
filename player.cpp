#include "player.h"

Player::Player(){
    name = "N/A";
    health = 0;
    damage = 0;
}
Player::Player(string name, int health, int damage){
    this->name = name;
    this->health = health;
    this->damage = damage;
}
void Player::attack(Player* opponent, int damage){
    int opponentHealth = opponent->getHealth();
    opponentHealth = opponentHealth - damage;
    opponent->setHealth(opponentHealth);
}
void Player::takeDamage(int damage){
    health -= damage;
}
int Player::getHealth(){
    return health;
}
string Player::getName(){
    return name;
}
int Player::getDamage(){
    return damage;
}
void Player::setHealth(int health){
    this->health = health;
}

void Player::setName(string name){
    this->name = name;
}

void Player::setDamage(int damage){
    this->damage = damage;
}
