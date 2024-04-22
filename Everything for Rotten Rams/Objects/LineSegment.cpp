//
// Created by Brian Baker on 10/12/23.
//

#include "LineSegment.h"
#include <string>
#include <cmath>
using namespace std;

Point LineSegment::getA(){
    return a;
}

Point LineSegment::getB(){
    return b;
}

double LineSegment::slope() {
    return (b.y - a.y) / (b.x - a.x);
}

bool LineSegment::parallel(LineSegment& other){
    // liney.parallel(shorty); liney is referenced by the pointer "this".
    return this->slope() == other.slope();
}

bool LineSegment::perpendicular(LineSegment& other){
    return abs((-1.0 / this->slope()) - other.slope()) < 0.0001;
}

double LineSegment::length(){
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

void LineSegment::moveLineHorizontal(double distance){
    a.x += distance; // a.x = a.x + distance;
    b.x += distance;
}

void LineSegment::moveLineVertical(double distance){
    a.y += distance;
    b.y += distance;
}

void LineSegment::movePointAHorizontal(double distance){
    a.x += distance;
}

void LineSegment::movePointAVertical(double distance){
    a.y += distance;
}

void LineSegment::movePointBHorizontal(double distance){
    b.x += distance;
}

void LineSegment::movePointBVertical(double distance){
    b.y += distance;
}

string LineSegment::toString(){
    return "A(" + to_string(a.x) + ", " + to_string(a.y) + ") to B(" +
            to_string(b.x) + ", " + to_string(b.y) + ")";
}











