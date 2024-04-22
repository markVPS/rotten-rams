//
// Created by Brian Baker on 10/12/23.
//

#ifndef OBJECTIFICATION_LINESEGMENT_H
#define OBJECTIFICATION_LINESEGMENT_H
#include <string>
using namespace std;

struct Point{
    double x;
    double y;
};

class LineSegment {
private:
    Point a = {0,0};
    Point b = {0,0};
public:
    Point getA();
    Point getB();
    double slope();
    bool parallel(LineSegment& other);
    bool perpendicular(LineSegment& other);
    double length();
    void moveLineHorizontal(double distance);
    void moveLineVertical(double distance);
    void movePointAHorizontal(double distance);
    void movePointAVertical(double distance);
    void movePointBHorizontal(double distance);
    void movePointBVertical(double distance);
    string toString();
};


#endif //OBJECTIFICATION_LINESEGMENT_H
