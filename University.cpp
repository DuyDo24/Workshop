#include "University.h"

University::University(const std::string& name, const std::string& location)
    : name(name), location(location) {}

void University::addCourse(int id, const std::string& name) {
    courses.emplace_back(id, name);
}
