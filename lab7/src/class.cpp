#include "../include/class.h"
//----------KLASA SQUARE----------
double Square::getArea() {
    return a*a;
}
double Square::getParimeter() {
    return 4*a;
}
//----------KLASA RECTANGLE----------
double Rectangle::getArea() {
    return a*b;
}
double Rectangle::getParimeter() {
    return 2*a+2*b;
}
//----------KLASA CIRCLE----------
double Circle::getArea() {
    return r*r*M_PI;
}
double Circle::getParimeter() {
    return 2*r*M_PI;
}