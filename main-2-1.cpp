#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main(){

    Fridge frozone;
    
    frozone.set_powerRating(70);
    frozone.set_isOn(true);
    frozone.setVolume(1000);

    cout << frozone.getPowerConsumption() << endl;
return 0;
}