#include <iostream>
#include "House.h"
#include "Appliance.h"
#include "TV.h"

int main() {
    // Create a House object with space for 3 appliances
    House myHouse(3);

    // Create appliances
    Appliance* tv1 = new TV(100, 40);
    Appliance* tv2 = new TV(150, 50);

    // Add appliances to the House
    myHouse.addAppliance(tv1);
    myHouse.addAppliance(tv2);

    // Calculate and display total power consumption
    std::cout << "Total Power Consumption: " << myHouse.getTotalPowerConsumption() << " watts" << std::endl;

    // The House destructor will automatically clean up the appliances

    return 0;
}

