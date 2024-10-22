#ifndef EFFECT_H
#define EFFECT_H
#include "GameEntity.h"
#include <iostream>
#include <tuple>
#include <cstdlib>
#include <ctime>

class Effect{
public:
    virtual void apply(GameEntity& entity) = 0;
    Effect();
    ~Effect();
};
#endif