#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main(){

    Fridge frozone;
    
    frozone.set_powerRating(5);
    frozone.set_isOn(true);
    frozone.setVolume(10);

    cout << frozone.getPowerConsumption() << endl;
return 0;
}