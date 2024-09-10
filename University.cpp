#include "University.h"

// Default constructor
University::University() : name("Unknown"), location("Unknown") {}

// Parameterized constructor
University::University(const std::string& name, const std::string& location)
    : name(name), location(location) {}

// Destructor
University::~University() {}

// Method to add a course to the university
void University::addCourse(int id, const std::string& courseName) {
    Course newCourse(courseName, id);
    courses.push_back(newCourse);
}

// Getter for university name
std::string University::getName() const {
    return name;
}

// Getter for university location
std::string University::getLocation() const {
    return location;
}

// Getter for the list of courses
std::vector<Course> University::getCourses() const {
    return courses;
}
