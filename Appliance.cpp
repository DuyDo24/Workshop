#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false){}
Appliance::Appliance(int powerRating):powerRating(powerRating){}
void Appliance::turnOff(){
    isOn = false;
}
void Appliance::turnOn(){
    isOn = true;
}
double Appliance::getPowerConsumption(){
    return 0;
}
int Appliance::get_powerRating(){
    return powerRating;
}
int Appliance::set_powerRating(){
    this->powerRating = powerRating;
}
bool Appliance::get_isOn(){
    return isOn;
}
bool Appliance::set_isOn(){
    this->isOn = isOn;
}
