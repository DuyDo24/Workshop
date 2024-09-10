#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"

class Instructor : public Person {
public:
    // Constructor
    Instructor(const std::string& name);

    // Destructor
    ~Instructor();
};

#endif // INSTRUCTOR_H
