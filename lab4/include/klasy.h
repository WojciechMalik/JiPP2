#ifndef REPOZYTORIUM_KLASY_H
#define REPOZYTORIUM_KLASY_H
#include<iostream>
#include<cmath>
using namespace std;

class Cuboid{
    int base, side1, side2;
public:
    Cuboid(int, int, int);
    int area();
};

class Sphere{
    int radius;
public:
    Sphere(int);
    double volume();
};

class QuadraticFunction{
    int a, b, c;
public:
    QuadraticFunction(int, int, int);
    void print_function();
};

class Student{
    string name, surname;
    int ID, number_of_questions;
    double correct;
public:
    void get_data();
    double percent();
    void print_result();
};

class Point{
public:
    int coordinates1[2], coordinates2[2];
    Point(int *, int *);
    double distance_between();
};

class Figure{
public:
    int number_of_vertices;
    int **array;
    Figure(int, int **);
    void print_array();
    ~Figure();
};







#endif