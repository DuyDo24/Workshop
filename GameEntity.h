#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>

class GameEntity{
protected:
    std::tuple<int, int> position;
    enum GameEntityType{
        ExplosionType, 
        MineType, 
        NoneType, 
        ShipType
    };
    GameEntityType type;

public:
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    GameEntityType getType();
};

#endif