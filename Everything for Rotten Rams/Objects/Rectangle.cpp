//
// Created by Brian Baker on 10/10/23.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;

double Rectangle::getLength(){
    return length;
}

void Rectangle::setLength(double l){
    if(l >= 0)
        length = l;
}

double Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(double width) {
    if(width >= 0)
        this->width = width;
}

double Rectangle::area(){
    return length * width;
}

double Rectangle::perimeter(){
    return 2 * length + 2 * width;
}

void Rectangle::display(){
    cout << "[" << width << " x " << length << "]";
}







