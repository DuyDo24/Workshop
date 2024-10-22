#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <tuple>
#include <cstdlib>
#include <ctime>

class Utils{
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        int x = rand() % gridWidth;
        int y = rand() % gridHeight;
    return std::tuple<int, int>{x,y};
    }
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        int x1 = std::get<0>(pos1);
        int y1 = std::get<1>(pos1);
        int x2 = std::get<0>(pos2);
        int y2 = std::get<1>(pos2);
        return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
        
    }
};

#endif