#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person{
protected:
    int id;
public:
    Student();
    Student(string& name, int id);
    int getId();
    void setId(int id);
};
#endif