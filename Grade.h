#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
private:
    std::string assignment;
    int value;

public:
    // Default constructor
    Grade();

    // Parameterized constructor
    Grade(const std::string& assignment, int value);

    // Destructor
    ~Grade();

    // Getter for assignment name
    std::string getAssignment() const;

    // Getter for grade value
    int getValue() const;

    // Setter for assignment name
    void setAssignment(const std::string& assignment);

    // Setter for grade value
    void setValue(int value);
};

#endif // GRADE_H
