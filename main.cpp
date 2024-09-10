#include <iostream>
#include "University.h"
#include "Student.h"
#include "Instructor.h"
#include "Gradebook.h"

int main() {
    // 1. Create a university
    University myUniversity("Tech University", "Cityville");

    // 2. Add a course to the university
    myUniversity.addCourse(101, "Introduction to Programming");

    // 3. Add a student to the course
    Student student1("Alice", 1);
    myUniversity.getCourses()[0].addPerson(&student1);

    // 4. Add an instructor to the course
    Instructor instructor1("Dr. Smith");
    myUniversity.getCourses()[0].addPerson(&instructor1);

    // 5. Add grades for the student in the course
    Gradebook gradebook;
    gradebook.addGrade(student1.getId(), myUniversity.getCourses()[0].getId(), "Assignment 1", 95);
    gradebook.addGrade(student1.getId(), myUniversity.getCourses()[0].getId(), "Assignment 2", 88);

    // 6. Display the university details
    std::cout << "University: " << myUniversity.getName() << " located in " << myUniversity.getLocation() << std::endl;

    // 7. Display course details
    std::cout << "Course: " << myUniversity.getCourses()[0].getName() << " (ID: " << myUniversity.getCourses()[0].getId() << ")" << std::endl;

    // 8. Display student and instructor information
    std::cout << "Student: " << student1.getName() << " (ID: " << student1.getId() << ")" << std::endl;
    std::cout << "Instructor: " << instructor1.getName() << std::endl;

    // 9. Display grades
    std::cout << "Grades for " << student1.getName() << ":" << std::endl;
    for (const auto& grade : gradebook.getGrades()) {
        std::cout << "Assignment: " << grade.getAssignment() << ", Grade: " << grade.getValue() << std::endl;
    }

    return 0;
}
