#include "../include/klasy.h"
#include<iostream>

//----------CLASS CUBOID----------
//constructor
Cuboid::Cuboid(int pole_podstawy,int pole_boku1,int pole_boku2){
    base=pole_podstawy;
    side1=pole_boku1;
    side2=pole_boku2;
}
//getters and setters
int Cuboid::get_base(){
    return base;
}
int Cuboid::get_side1(){
    return side1;
}
int Cuboid::get_side2(){
    return side2;
}
void Cuboid::set_base(int base){
    this->base=base;
}
void Cuboid::set_side1(int side1){
    this->side1=side1;
}
void Cuboid::set_side2(int side2){
    this->side2=side2;
}
//methods
 int Cuboid::area(){
    return 8*(base+side1+side2);
}

//----------CLASS SPHERE----------
//constructor
Sphere::Sphere(int promien){
    radius=promien;
}
//getters and setters
int Sphere::get_radius(){
    return radius;
}
void Sphere::set_radius(int radius){
    this->radius=radius;
}
//methods
double Sphere::volume() {
    return 4./3*M_PI*pow(radius, 3);
}

//----------CLASS QUADRATICFUNCTION----------
//constructor
QuadraticFunction::QuadraticFunction(int a, int b, int c) {
    this->a=a;
    this->b=b;
    this->c=c;
}
//getters and setters
int QuadraticFunction::get_a() {
    return a;
}
int QuadraticFunction::get_b(){
    return b;
}
int QuadraticFunction::get_c(){
    return c;
}
void QuadraticFunction::set_a(int a) {
    this->a=a;
}
void QuadraticFunction::set_b(int b){
    this->b=b;
}
void QuadraticFunction::set_c(int c){
    this->c=c;
}
//methods
void QuadraticFunction::print_function() {
    cout<<"f(x)="<<a<<"x^2+"<<b<<"x+"<<c<<endl;
}

//----------CLASS STUDENT----------
//getters and setters
string Student::get_name(){
    return name;
}
string Student::get_surname(){
    return surname;
}
int Student::get_ID(){
    return ID;
}
int Student::get_number_of_questions(){
    return number_of_questions;
}
double Student::get_correct(){
    return correct;
}
void Student::set_name(string name){
    this->name=name;
}
void Student::set_surname(string surname){
    this->surname=surname;
}
void Student::set_ID(int ID){
    this->ID=ID;
}
void Student::set_number_of_questions(int number){
    this->number_of_questions=number;
}
void Student::set_correct(double correct){
    this->correct=correct;
}
//methods
void Student::get_data() {
    cout<<"Wpisz dane studenta\n1.Imie:";cin>>name;
    cout<<"2.Nazwisko:";cin>>surname;
    cout<<"3.Nr albumu:";cin>>ID;
    cout<<"4.Liczba pytan:";cin>>number_of_questions;
    cout<<"5.Liczba poprawnych odpowiedzi:";cin>>correct;
}
double Student::percent(){
    return correct/number_of_questions*100;
}
void Student::print_result() {
    cout<<"\n\nStudent\nImie:"<<name<<endl;
    cout<<"Nazwisko:"<<surname<<endl;
    cout<<"Nr albumu:"<<ID<<endl;
    cout<<"Ilosc pytan:"<<number_of_questions<<endl;
    cout<<"Ilosc poprawnych odpowiedzi:"<<correct<<endl;
    cout<<"Procent poprawnych odpowiedzi:"<<Student::percent()<<"%";
}

//----------CLASS POINT----------
//constructor
Point::Point(int *tab1, int *tab2) {
    coordinates1[0]=tab1[0];
    coordinates2[0]=tab2[0];
    coordinates1[1]=tab1[1];
    coordinates2[1]=tab2[1];
}
//methods
double Point::distance_between() {
    return sqrt(pow(coordinates1[0]-coordinates2[0], 2)+pow(coordinates1[1]-coordinates2[1], 2));
}

//----------CLASS FIGURE----------
//constructor
Figure::Figure(int ilosc_wierzcholkow, int **tablica) {
    number_of_vertices = ilosc_wierzcholkow;
    array = new int *[number_of_vertices];
    for (int i = 0; i < number_of_vertices; i++)
        for (int j = 0; j < 2; j++)
            array[i] = new int[2];

    array=tablica;
}
//methods
void Figure::print_array() {
    cout<<"Tablica wierzcholkow:\n";
    for(int i=0; i<number_of_vertices; i++)
            cout<<"Wierzcholek nr "<<i+1<<":("<<array[i][0]<<", "<<array[i][1]<<")\n";
}
//destructor
Figure::~Figure() {
    for(int i=0; i<number_of_vertices; i++)
        delete [] array[i];
    delete[] array;
    array=NULL;
}