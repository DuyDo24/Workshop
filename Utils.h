#ifndef UTILS_H
#define UTILS_H

#include <tuple>    // Required for std::tuple
#include <cmath>    // Required for sqrt, pow
#include <cstdlib>  // Required for rand

class Utils {
public:
    // Static function to generate a random position within a grid
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        int x = rand() % gridWidth;
        int y = rand() % gridHeight;
        return std::make_tuple(x, y);
    }

    // Static function to calculate the Euclidean distance between two positions
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        int x1 = std::get<0>(pos1);
        int y1 = std::get<1>(pos1);
        int x2 = std::get<0>(pos2);
        int y2 = std::get<1>(pos2);
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

#endif // UTILS_H
