#include "House.h"

House::House(){
    numAppliances = 0;
    currentNumAppliances = 0;
    appliances = new Appliance*[numAppliances];
}
House::House(int numAppliances){
    this->numAppliances = numAppliances;
    currentNumAppliances = 0;
    appliances = new Appliance*[numAppliances];
}
bool House::addAppliance(Appliance* appliance) {
    if (currentNumAppliances < numAppliances) {
        appliances[currentNumAppliances++] = appliance;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption(){
    double totalPower = 0.0;
    for (int i = 0; i < currentNumAppliances; i++) {
        totalPower += appliances[i]->getPowerConsumption();
    }
    return totalPower;
}

House::~House() {
    for (int i = 0; i < numAppliances; ++i) {
        delete appliances[i]; // Deallocate each Appliance object
    }
    delete[] appliances; // Deallocate the array of pointers
}