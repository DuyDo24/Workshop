#include <iostream>
#include "Appliance.h"
#include "TV.h"

int main(){

    TV frozone;
    
    frozone.set_powerRating(70);
    frozone.setScreenSize(1000);

    cout << frozone.getPowerConsumption() << endl;
return 0;
}