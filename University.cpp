#include "University.h"


University::University() : name("Unknown"), location("Unknown") {}
University::University(string& name, string& location): name(name), location(location) {}
University::~University() {}


void University::addCourse(int id, string& courseName) {
    Course newCourse(courseName, id);
    courses.push_back(newCourse);
}

string University::getName(){
    return name;
}

std::string University::getLocation(){
    return location;
}

std::vector<Course> University::getCourses() {
    return courses;
}
