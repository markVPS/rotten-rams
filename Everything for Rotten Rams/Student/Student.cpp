//
// Created by Brian Baker on 10/17/23.
//

#include "Student.h"
#include <string>
#include <vector>
#include <iostream>
#include "Grade.h"
using namespace std;

unsigned int Student::nextId = 1000001;

Student::Student(string name, string major){
    this->name = name;
    this->major = major;
    this->id = Student::nextId;
    Student::nextId++;
}

Student::Student(string name) : Student(name, "Undeclared"){}

Student::Student() : Student("", "Undeclared"){}

string Student::getName(){
    return this->name;
}

void Student::setName(string name){
    this->name = name;
}

string Student::getMajor(){
    return this->major;
}

void Student::setMajor(string major){
    this->major = major;
}

unsigned int Student::getId(){
    return this->id;
}

vector<Grade> Student::getGrades(){
    return this->grades;
}

void Student::assignGrade(string semester, string course,
                          int units, char letter, bool pnp){
    Grade noob;
    noob.semester = semester;
    noob.course = course;
    noob.units = units;
    noob.letter = letter;
    noob.passNotPass = pnp;
    this->grades.push_back(noob);
}

double Student::gpa(){
    int totalUnits = 0;
    double gradePoints = 0;
    for(Grade grade : grades){
        if(grade.letter == 'A')
            gradePoints += 4.0 * grade.units;
        else if(grade.letter == 'B')
            gradePoints += 3.0 * grade.units;
        else if (grade.letter == 'C')
            gradePoints += 2.0 * grade.units;
        else if (grade.letter == 'D')
            gradePoints += 1.0 * grade.units;

        if(!grade.passNotPass)
            totalUnits += grade.units;
    }
    return gradePoints / totalUnits;
}

int Student::units(){
    int totalUnits = 0;
    for(Grade grade : grades){
        if(grade.letter != 'F' && grade.letter != 'N')
            totalUnits += grade.units;
    }
    return totalUnits;
}

void Student::display(){
    cout << name << endl
         << major << endl
         << "GPA: " << this->gpa() << "  [" << this->units() << " Total Units Earned]\n";
    for (Grade grade : grades){
        cout << "------------------------------\n"
             << grade.course << " (" << grade.semester << ")\n"
             << grade.letter << "  " << grade.units << " Units\n";
    }
}













