#include "Person.h"

// Default constructor
Person::Person() : name("Unknown") {}

// Parameterized constructor
Person::Person(const std::string& name) : name(name) {}

// Destructor
Person::~Person() {}

// Getter for name
std::string Person::getName() const {
    return name;
}

// Setter for name
void Person::setName(const std::string& name) {
    this->name = name;
}
