#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Person.h"

class Course {
private:
    std::string name;
    int id;
    std::vector<Person*> people;  // Stores both Students and Instructors

public:
    // Default constructor
    Course();

    // Parameterized constructor
    Course(const std::string& name, int id);

    // Destructor
    ~Course();

    // Method to add a person to the course
    void addPerson(Person* p);

    // Getter for course name
    std::string getName() const;

    // Getter for course ID
    int getId() const;

    // Getter for list of people (students and instructors)
    std::vector<Person*> getPeople() const;
};

#endif // COURSE_H
