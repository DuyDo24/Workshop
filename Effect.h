#ifndef EFFECT_H
#define EFFECT_H
#include "GameEntity.h"

class Effect{
public:
    Effect();
    ~Effect();
    virtual void apply(GameEntity& entity);
};
#endif