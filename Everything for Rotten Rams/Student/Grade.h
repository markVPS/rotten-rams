//
// Created by Brian Baker on 10/17/23.
//

#ifndef CLOWNCOLLEGE_GRADE_H
#define CLOWNCOLLEGE_GRADE_H
#include <string>
using namespace std;

struct Grade {
    string course;
    int units;
    char letter;
    string semester;
    bool passNotPass;
};


#endif //CLOWNCOLLEGE_GRADE_H
