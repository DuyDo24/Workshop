#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect{
public:
    Explosion(){};
   ~Explosion(){};
   
   Explosion(int x, int y) : GameEntity(x,y,ExplosionType){};
   void apply(GameEntity& entity){
        type = NoneType;
        position = std::make_tuple(-1,-1);
   }
};
#endif