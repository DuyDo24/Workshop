#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity{
public:
    Mine();
    ~Mine();
    Explosion explode(){ 
        type = NoneType;
        return Explosion(std::get<0>(position),std::get<1>(position));
    }
    Mine(int x, int y) : GameEntity(x,y,MineType){};

};
#endif