#include "Gradebook.h"

void Gradebook::addGrade(int stud_id, int course_id, const std::string& assignment, int value) {
    grades.emplace_back(assignment, value);
}
