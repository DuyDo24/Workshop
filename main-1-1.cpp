#include <iostream>
#include "Appliance.h"

int main() {
    // Create an appliance using the default constructor
    Appliance myAppliance;

    // Output the initial state
    std::cout << "Initial Power Rating: " << myAppliance.get_powerRating() << std::endl;
    std::cout << "Is Appliance On? " << (myAppliance.get_isOn() ? "Yes" : "No") << std::endl;

    // Turn on the appliance
    myAppliance.turnOn();
    std::cout << "After turning on, Is Appliance On? " << (myAppliance.get_isOn() ? "Yes" : "No") << std::endl;

    // Check power consumption
    std::cout << "Power Consumption: " << myAppliance.getPowerConsumption() << std::endl;

    // Turn off the appliance
    myAppliance.turnOff();
    std::cout << "After turning off, Is Appliance On? " << (myAppliance.get_isOn() ? "Yes" : "No") << std::endl;

    return 0;
}
