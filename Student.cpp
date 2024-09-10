#include "Student.h"

// Default constructor
Student::Student() : Person(), id(0) {}

// Parameterized constructor
Student::Student(const std::string& name, int id) : Person(name), id(id) {}

// Destructor
Student::~Student() {}

// Getter for student ID
int Student::getId() const {
    return id;
}

// Setter for student ID
void Student::setId(int id) {
    this->id = id;
}
