#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player {
protected:
    string name;
    int health;
    int damage;
public:
    Player();
    Player(string name, int health, int damage);
    void attack(Player* opponent, int damage);
    void takeDamage(int damage);
    int getHealth();
    void setHealth(int health);
    string getName();
    void setName(string name);
    int getDamage();
    void setDamage(int damage);
};

#endif 