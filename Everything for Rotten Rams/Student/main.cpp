#include <iostream>
#include "Grade.h"
#include "Student.h"
using namespace std;

int main() {

    Student frank("Frank Capacolla", "Business");
    frank.assignGrade("F23", "BA 13 Whacking People", 4, 'A', false);
    frank.assignGrade("F23", "PSY 7 Intimidating People", 3, 'C', false);
    frank.assignGrade("F23", "PE 5 Threatening People", 2, 'B', false);

    frank.display();


    return 0;
}
