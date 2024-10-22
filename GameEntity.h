#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <iostream>
#include <tuple>
#include <cstdlib>
#include <ctime>

enum GameEntityType{
        ExplosionType, 
        MineType, 
        NoneType, 
        ShipType
    };

class GameEntity{
public:
    std::tuple<int, int> position;
    GameEntityType type;

    ~GameEntity(){}
    GameEntity(int x, int y, GameEntityType entityType){
        position = std::make_tuple(x, y);
        type = entityType;
    }
    std::tuple<int, int> getPos(){
        return position;
    }
    GameEntityType getType(){
        return type;
    }
};

#endif