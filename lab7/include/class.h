#ifndef REPOZYTORIUM_CLASS_H
#define REPOZYTORIUM_CLASS_H
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Figure{
private:
    string name, color;
public:
    virtual double getArea()=0;
    virtual double getParimeter()=0;
};

class Square:public Figure{
private:
    double a;
public:
    Square(){};
    Square(double a1):a(a1){};
    double getArea();
    double getParimeter();
};

class Rectangle:public Figure{
private:
    double a, b;
public:
    Rectangle(){};
    Rectangle(double a1, double b1): a(a1), b(b1){};
    double getArea();
    double getParimeter();
};

class Circle:public Figure{
private:
    double r;
public:
    Circle(){};
    Circle(double r1): r(r1){};
    double getArea();
    double getParimeter();
};
#endif
