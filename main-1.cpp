#include <iostream>
#include "GameEntity.h"
#include "Utils.h"
using namespace std;

int main(){
    int gridWidth = 100;
    int gridHeight = 100;

    std::tuple<int,int> position1 = Utils::generateRandomPos(gridWidth,gridHeight);
    std::tuple<int,int> position2 = Utils::generateRandomPos(gridWidth,gridHeight);

    GameEntity entity1(get<0>(position1), get<1>(position1), ExplosionType);
    GameEntity entity2(get<0>(position1), get<1>(position1), ShipType);

    cout << "position 1 x,y = " << get<0>(position1) << "," << get<1>(position1);
    cout << "position 2 x,y = " << get<0>(position2) <<  ","<< get<1>(position2) << endl;
    
    
    double distance = Utils::calculateDistance(position1, position2);
    cout << "the distance is " << distance << endl;
}
