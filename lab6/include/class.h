#ifndef REPOZYTORIUM_CLASS_H
#define REPOZYTORIUM_CLASS_H
#include <iostream>
#include <math.h>
using namespace std;

class Vector{
private:
    double x, y;
public:
    Vector();
    Vector(double x, double y);
    double length();
    void print()const;
    Vector operator-() const;
    Vector operator+(const Vector &rhs) const;
    Vector operator-(const Vector &rhs)const;
    double operator*(const Vector &rhs) const;
    Vector operator*(const double x)const;
    bool operator==(const Vector &rhs)const;
    friend std::ostream& operator<<(std::ostream&, const Vector&);
};

class Node {
private:
    double x, y;
public:
    Node();
    Node(double x, double y);
    void display();
    void updateValue(double x, double y);
    friend double pointsDistance(Node x, Node y);
    friend std::ostream& operator<<(std::ostream& lhs, const Node &rhs);
};
double pointsDistance(Node a, Node b);

class ComplexNumber{
private:
    double real;
    double imaginary;
public:
    ComplexNumber();
    ComplexNumber(double rze, double uro);
    ComplexNumber operator+(const ComplexNumber &rhs)const;
    ComplexNumber operator-(const ComplexNumber &rhs)const;
    ComplexNumber operator*(const ComplexNumber &rhs)const;
    ComplexNumber operator/(const ComplexNumber &rhs)const;
    ComplexNumber operator-()const;
    void print() const;
};

class Triangle{
private:
    Node a, b, c;
    string name;
public:
    Triangle();
    Triangle(Node x, Node y, Node z, string n);
    friend std::ostream& operator<<(std::ostream& lhs, const Triangle &rhs);
    void display();
    double distance(int firstPointIndex, int secondPointIndex);
};

void showTriangleData(Triangle triangle);
void showTriangleData(Triangle &triangle);
void showTriangleData(Triangle *triangle);

#endif //REPOZYTORIUM_CLASS_H
