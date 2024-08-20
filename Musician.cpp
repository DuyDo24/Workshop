#include "Musician.h"

Musician::Musician(){
    music_instrument = "null";
    music_experience = 0 ;
}
Musician::Musician(string instrument, int experience) {
    music_instrument = instrument;
    music_experience = experience;
}

string Musician::get_instrument() {
    return music_instrument;
}

int Musician::get_experience(){
    return music_experience;
}
