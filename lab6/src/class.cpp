#include "class.h"
//----------KLASA VECTOR----------
Vector::Vector(): x(0), y(0) {}
Vector::Vector(double x, double y) : x(x), y(y) {}
double Vector::length() {
    return sqrt(x * x + y * y);
}
void Vector::print()const{
    cout<<x<<", "<<y<<endl;
}
Vector Vector::operator-() const {
    return {-x, -y};
}
Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}
Vector Vector::operator-(const Vector &rhs)const {
    return {x - rhs.x, y - rhs.y};
}
bool Vector::operator==(const Vector &rhs)const {
    return x==rhs.x && y==rhs.y;
}
Vector Vector::operator*(const double a)const {
    return {x * a, y * a};
}
double Vector::operator*(const Vector &rhs) const{
    return x*rhs.x+y*rhs.y;
}
//----------KLASA NODE----------
Node::Node() {
    x = 0;
    y = 0;
}
Node::Node(double x, double y): x(x), y(y) {}
void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}
void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}
double pointsDistance(Node a, Node b){
    return sqrt(pow(a.x-b.x, 2)+pow(a.y-b.y, 2));
}
std::ostream& operator<<(std::ostream& lhs, const Node &rhs){
    return lhs<<"("<<rhs.x<<", "<<rhs.y<<")";
}
//----------KLASA COMPLEXNUMBER----------
ComplexNumber::ComplexNumber():real(0), imaginary(0){}
ComplexNumber::ComplexNumber(double r, double im):real(r),imaginary(im){}
void ComplexNumber::print() const {
    cout<<"Liczba zespolona:"<<real<<"+"<<imaginary<<"i"<<endl;
}
ComplexNumber ComplexNumber::operator+(const ComplexNumber &rhs)const{
    return {real+rhs.real, imaginary+rhs.imaginary};
}
ComplexNumber ComplexNumber::operator-(const ComplexNumber &rhs)const{
    return {real-rhs.real, imaginary-rhs.imaginary};
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber &rhs) const {
    return {(real*rhs.real)+(imaginary*rhs.imaginary*(-1)), (imaginary*rhs.real)+(rhs.imaginary*real)};
}
ComplexNumber ComplexNumber::operator-()const{
    return{real, (-1)*imaginary};
}
ComplexNumber ComplexNumber::operator/(const ComplexNumber &rhs)const{
    if(((real*rhs.real)+(imaginary*rhs.imaginary))>0){
        return {real*rhs.real+imaginary*rhs.imaginary, rhs.real*imaginary-real*rhs.imaginary};
    }
    else {
        cout << "Nie mozna wykonac dzielenia na podanych liczbach zespolonych" << endl;
        exit(0);
    }
}
std::ostream& operator<<(std::ostream& lhs, const Vector &rhs){
    return lhs<<"("<<rhs.x<<")"<<rhs.y<<")";
}
//----------KLASA TRIANGLE----------
Triangle::Triangle(){}
Triangle::Triangle(Node x, Node y, Node z, string n): a(x), b(y), c(z), name(n){}
std::ostream& operator<<(std::ostream& lhs, const Triangle &rhs){
    return lhs<<"Triangle "<<rhs.name<<" "<<rhs.a<<" "<<rhs.b<<" "<<rhs.c;
}
void Triangle::display() {
    cout<<"Triangle: "<<name<<"\na:"<<a<<"\nb:"<<b<<"\nc:"<<c<<endl;
}
double Triangle::distance(int firstPointIndex, int secondPointIndex){
    Node tab[3] = {a,b,c};
    return pointsDistance(tab[firstPointIndex], tab[secondPointIndex]);
}
void showTriangleData(Triangle triangle){
    triangle.display();
}
void showTriangleData(Triangle &triangle){
    triangle.display();
}
void showTriangleData(Triangle *triangle){
    triangle->display();
}