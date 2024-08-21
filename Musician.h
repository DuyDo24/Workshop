#ifndef MUSICIAN_H
#define MUSICIAN_H
using namespace std;
#include <string>

class Musician {
private:
    string music_instrument;
    int music_experience;

public:
    Musician();
    Musician(string instrument, int experience);
    string get_instrument();
    int get_experience();
};

#endif
