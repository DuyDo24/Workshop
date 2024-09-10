#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "Course.h"

class University {
private:
    std::string name;
    std::string location;
    std::vector<Course> courses;

public:
    // Default constructor
    University();

    // Parameterized constructor
    University(const std::string& name, const std::string& location);

    // Destructor
    ~University();

    // Method to add a course
    void addCourse(int id, const std::string& name);

    // Getter for university name
    std::string getName() const;

    // Getter for university location
    std::string getLocation() const;

    // Getter for the list of courses
    std::vector<Course> getCourses() const;
};

#endif // UNIVERSITY_H
