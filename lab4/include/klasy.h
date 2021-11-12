#ifndef REPOZYTORIUM_KLASY_H
#define REPOZYTORIUM_KLASY_H
#include<iostream>
#include<cmath>
using namespace std;

class Cuboid{
    int base, side1, side2;
public:
    Cuboid(int, int, int);
    int get_base();
    int get_side1();
    int get_side2();
    void set_base(int base);
    void set_side1(int side1);
    void set_side2(int side2);
    int area();
};

class Sphere{
    int radius;
public:
    Sphere(int);
    int get_radius();
    void set_radius(int radius);
    double volume();
};

class QuadraticFunction{
    int a, b, c;
public:
    QuadraticFunction(int, int, int);
    int get_a();
    int get_b();
    int get_c();
    void set_a(int a);
    void set_b(int b);
    void set_c(int c);
    void print_function();
};

class Student{
    string name, surname;
    int ID, number_of_questions;
    double correct;
public:
    string get_name();
    string get_surname();
    int get_ID();
    int get_number_of_questions();
    double get_correct();
    void set_name(string name);
    void set_surname(string surname);
    void set_ID(int ID);
    void set_number_of_questions(int number);
    void set_correct(double correct);
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