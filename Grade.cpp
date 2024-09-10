#include "Gradebook.h"

// Default constructor
Gradebook::Gradebook() {}

// Destructor
Gradebook::~Gradebook() {}

// Method to add a grade to the gradebook
void Gradebook::addGrade(int stud_id, int course_id, const std::string& assignment, int value) {
    Grade newGrade(assignment, value);
    grades.push_back(newGrade);
}

// Getter for all grades
std::vector<Grade> Gradebook::getGrades() const {
    return grades;
}
