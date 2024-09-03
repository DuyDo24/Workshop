#include "House.h"

House::House(){
    numAppliances = 0;
    capacity = 0;
    appliances = nullptr;
}
House::House(int numAppliances){
    numAppliances = 0;
    capacity = numAppliances;
    appliances = new Appliance*[capacity];
    for(int i = 0; i < capacity; i++) {
        appliances[i] = nullptr;
    }
}
bool House::addAppliance(Appliance* appliance) {
    if (numAppliances < capacity) {
        appliances[numAppliances++] = appliance;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() {
    double totalPower = 0;
    for (int i = 0; i < numAppliances; ++i) {
        if (appliances[i] != nullptr) {
            totalPower += appliances[i]->getPowerConsumption();
        }
    }
    return totalPower;
}

House::~House() {
    for (int i = 0; i < numAppliances; ++i) {
        delete appliances[i]; // Deallocate each Appliance object
    }
    delete[] appliances; // Deallocate the array of pointers
}