//
// Created by Brian Baker on 10/10/23.
//

#ifndef OBJECTIFICATION_RECTANGLE_H
#define OBJECTIFICATION_RECTANGLE_H


class Rectangle {
private:
    double length;
    double width;

public:
    double getLength();
    void setLength(double l);
    double getWidth();
    void setWidth(double width);
    double area();
    double perimeter();
    void display();
};


#endif //OBJECTIFICATION_RECTANGLE_H
