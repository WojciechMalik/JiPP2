#include "../include/klasy.h"
#include<iostream>
#include<fstream>

Cuboid::Cuboid(int pole_podstawy,int pole_boku1,int pole_boku2){
    base=pole_podstawy;
    side1=pole_boku1;
    side2=pole_boku2;
}
 int Cuboid::area(){
    return 8*(base+side1+side2);
}

Sphere::Sphere(int promien){
    radius=promien;
}
double Sphere::volume() {
    return 4./3*M_PI*pow(radius, 3);
}

QuadraticFunction::QuadraticFunction(int a, int b, int c) {
    this->a=a;
    this->b=b;
    this->c=c;
}
void QuadraticFunction::print_function() {
    cout<<"f(x)="<<a<<"x^2+"<<b<<"x+"<<c<<endl;
}

/*Student::Student(string imie, string nazwisko, int nr_albumu, int ilosc_pytan, double poprawne) {
    name=imie;
    surname=nazwisko;
    ID=nr_albumu;
    number_of_questions=ilosc_pytan;
    correct=poprawne;
}*/

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

Point::Point(int *tab1, int *tab2) {
    coordinates1[0]=tab1[0];
    coordinates2[0]=tab2[0];
    coordinates1[1]=tab1[1];
    coordinates2[1]=tab2[1];
}
double Point::distance_between() {
    return sqrt(pow(coordinates1[0]-coordinates2[0], 2)+pow(coordinates1[1]-coordinates2[1], 2));
}

Figure::Figure(int ilosc_wierzcholkow, int **tablica) {
    number_of_vertices = ilosc_wierzcholkow;
    array = new int *[number_of_vertices];
    for (int i = 0; i < number_of_vertices; i++)
        for (int j = 0; j < 2; j++)
            array[i] = new int[2];

    array=tablica;
}
void Figure::print_array() {
    cout<<"Tablica wierzcholkow:\n";
    for(int i=0; i<number_of_vertices; i++)
            cout<<"Wierzcholek nr "<<i+1<<":("<<array[i][0]<<", "<<array[i][1]<<")\n";
}

Figure::~Figure() {
    for(int i=0; i<number_of_vertices; i++)
        delete [] array[i];
    delete[] array;
    array=NULL;
}