//
// Created by Brian Baker on 10/17/23.
//

#ifndef CLOWNCOLLEGE_STUDENT_H
#define CLOWNCOLLEGE_STUDENT_H
#include <string>
#include <vector>
#include "Grade.h"
using namespace std;

class Student {
private:
    string name;
    string major;
    unsigned int id;
    static unsigned int nextId;
    vector<Grade> grades;
public:
    Student(string name, string major);
    Student(string name);
    Student();
    string getName();
    void setName(string name);
    string getMajor();
    void setMajor(string major);
    unsigned int getId();
    vector<Grade> getGrades();
    void assignGrade(string semester, string course, int units, char letter, bool pnp);
    double gpa();
    int units();
    void display();
};


#endif //CLOWNCOLLEGE_STUDENT_H
