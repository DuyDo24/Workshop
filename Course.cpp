#include "Course.h"

Course::Course(int id, const std::string& name) 
    : id(id), name(name) {}

void Course::addPerson(Person* p) {
    persons.push_back(p);
}
