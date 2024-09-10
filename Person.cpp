#include "Person.h"

Person::Person() : name("Unknown") {}

Person::Person(string& name):name(name) {}

string Person::getName() {
    return name;
}
void Person::setName(string& name) {
    this->name = name;
}

