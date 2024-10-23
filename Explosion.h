#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect{
public:
    Explosion();
    ~Explosion();
    Explosion(int x, int y){
        position = std::make_tuple(x,y);
        type = GameEntityType::ExplosionType;
    }
    void apply(GameEntity& entity)override{
        entity.position = std::make_tuple(-1,-1);
        entity.type = NoneType;
    }
};
#endif