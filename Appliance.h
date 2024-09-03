#ifndef APPLIANCE_H
#define APPLIANCE_H
using namespace std;

class Appliance{
private:
    int powerRating;
    bool isOn;

public:
    Appliance();
    Appliance(int powerRating);
    void turnOff();
    void turnOn();
    virtual double getPowerConsumption();
    int get_powerRating();
    void set_powerRating(int powerRating);
    bool get_isOn();
    void set_isOn(bool isOn);
};
#endif