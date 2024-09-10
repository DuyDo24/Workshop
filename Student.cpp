#include "Student.h"

Student::Student() : Person(), id(0) {}
Student::Student(string& name, int id) : Person(name), id(id) {}
Student::~Student() {}
int Student::getId() {
    return id;
}
void Student::setId(int id) {
    this->id = id;
}
