#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <vector>
#include <string>
#include "Grade.h"

class Gradebook {
private:
    std::vector<Grade> grades;

public:
    // Default constructor
    Gradebook();

    // Destructor
    ~Gradebook();

    // Method to add a grade
    void addGrade(int stud_id, int course_id, const std::string& assignment, int value);

    // Getter for all grades
    std::vector<Grade> getGrades() const;
};

#endif // GRADEBOOK_H
