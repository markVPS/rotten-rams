#include <iostream>
#include "Rectangle.h"
#include "LineSegment.h"
using namespace std;

int main() {

    LineSegment liney;
    LineSegment shorty;

    liney.movePointAHorizontal(7);
    liney.movePointAVertical(8);
    liney.movePointBHorizontal(0);
    liney.movePointBVertical(0);
    liney.moveLineVertical(7);
    cout << liney.toString() << endl;

    shorty.movePointAHorizontal(0);
    shorty.movePointAVertical(5);
    shorty.movePointBHorizontal(5);
    shorty.movePointBVertical(0);
    shorty.moveLineHorizontal(3.5);
    cout << shorty.toString() << endl;

    cout << liney.parallel(shorty) << endl;
    cout << liney.perpendicular(shorty) << endl;
    cout << liney.slope() << endl;
    cout << liney.length() << endl;
    cout << shorty.slope() << endl;
    cout << shorty.length() << endl;

    return 0;
}
