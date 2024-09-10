#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int id;

public:
    // Default constructor
    Student();

    // Parameterized constructor
    Student(const std::string& name, int id);

    // Destructor
    ~Student();

    // Getter for student ID
    int getId() const;

    // Setter for student ID
    void setId(int id);
};

#endif // STUDENT_H
