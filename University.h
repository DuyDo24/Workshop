#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "Course.h"
using namespace std;

class University {
private:
    string name;
    string location;
    vector<Course> courses;

public:
    University();
    University(string& name, string& location);
    ~University();
    void addCourse(int id, string& name);
    string getName();
    string getLocation();
    vector<Course> getCourses();
};
#endif 
