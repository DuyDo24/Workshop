#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;

public:
    // Default constructor
    Person();

    // Parameterized constructor
    Person(const std::string& name);

    // Destructor
    virtual ~Person();

    // Getter for name
    std::string getName() const;

    // Setter for name
    void setName(const std::string& name);
};

#endif // PERSON_H
