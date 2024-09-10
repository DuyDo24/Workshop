#include <iostream>
#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Instructor.h"
#include "Gradebook.h"

int main() {
    // Create a university
    University university("Sample University", "Sample Location");

    // Add a course to the university
    university.addCourse(1, "Introduction to Programming");

    // Create a student and instructor
    Student student("John Doe", 1001);
    Instructor instructor("Dr. Smith");

    // Add a student and instructor to the course
    Course course(1, "Introduction to Programming");
    course.addPerson(&student);
    course.addPerson(&instructor);

    // Add a grade for this student
    Gradebook gradebook;
    gradebook.addGrade(1001, 1, "Assignment 1", 95);

    std::cout << "Program completed successfully!" << std::endl;
    return 0;
}
