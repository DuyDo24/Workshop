#ifndef GAME_H
#define GAME_H
#include <vector>
#include "GameEntity.h"
#include "Utils.h"
#include "Mine.h"
#include "Ship.h"

class Game{
private:
    std::vector<GameEntity*> entities;

public:
    std::vector<GameEntity*> get_entities(){
        return entities;
    }
    void set_entities(std::vector<GameEntity*>& new_entities){
        entities = new_entities;
    }
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
        for (int i = 0; i < numShips; i++){
            std::tuple<int,int> shipPos = Utils::generateRandomPos(gridWidth,gridHeight);
            Ship* ship = new Ship(std::get<0>(shipPos),std::get<1>(shipPos));
            entities.push_back(ship);
        }
        for (int i = 0; i < numMines; i++){
            std::tuple<int,int> minePos = Utils::generateRandomPos(gridWidth,gridHeight);
            Mine* mine = new Mine(std::get<0>(minePos),std::get<1>(minePos));
            entities.push_back(mine);
        }
        return entities;
    }
    void gameLoop(int maxIterations, double mineDistanceThreshold){
        int iteration = 0;

        while (iteration < maxIterations){
            for (auto entity : entities){
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship){
                    ship->move(1,0);
                }
            }
            for (auto entity : entities){
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship) {
                    Mine* mine = dynamic_cast<Mine*>(entity);
                    if (mine){
                        double distance = Utils::calculateDistance(ship->getPos(),mine->getPos());

                        if (distance < mineDistanceThreshold){
                            Explosion explosion = mine->explode();
                            explosion.apply(*ship);
                        }
                    }
                }
            }
            bool allShipsDestroyed = true;
            for (auto entity : entities){
                Ship* ship = dynamic_cast<Ship*>(entity);
                    if (ship && ship->getType() != NoneType){
                        allShipsDestroyed = false;
                        break;
                    }
                }
            if (allShipsDestroyed) {
                std::cout << "All ships destroyed. Ending game loop.\n";
                break;
            }
            iteration++;
        }
    }

    ~Game() {
        for (auto entity : entities) {
            delete entity;
        }
    }
};

#endif // GAME_H