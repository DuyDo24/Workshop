#include "Course.h"

// Default constructor
Course::Course() : name("Unnamed Course"), id(0) {}

// Parameterized constructor
Course::Course(const std::string& name, int id) : name(name), id(id) {}

// Destructor
Course::~Course() {}

// Method to add a person to the course
void Course::addPerson(Person* p) {
    people.push_back(p);
}

// Getter for course name
std::string Course::getName() const {
    return name;
}

// Getter for course ID
int Course::getId() const {
    return id;
}

// Getter for list of people (students and instructors)
std::vector<Person*> Course::getPeople() const {
    return people;
}
