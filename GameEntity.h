#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>

enum GameEntityType{ExplosionType, MineType, NoneType, ShipType};

class GameEntity{
public:
    std::tuple<int, int> position;
    GameEntityType type;

    GameEntity(){};
    GameEntity(int x, int y, GameEntityType typeEntity){  
        position = std::make_tuple(x,y);
        type = typeEntity;
    }
    std::tuple<int, int> getPos(){
        return position;
    }
    GameEntityType getType(){
        return type;
    }
    ~GameEntity(){};
};
#endif