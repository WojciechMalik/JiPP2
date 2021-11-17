#include "class.h"


int main(){
    int wybor;
    cout<<"Wybor:\n"
          "1. Klasa Node\n"
          "2. Klasa Vector\n"
          "3. Klasa ComplexNumber\n"
          "4. Klasa Triangle\n";cin>>wybor;

    switch(wybor){
        case 1:{
            Node a(0, 0);
            Node b(3, 4);
            cout<<"Odleglosc miedzy podanymi punktami wynosi:"<<pointsDistance(a, b)<<endl;
            break;
        }
        case 2: {
            double iloczyn;
            Vector v1(10, 10), v2(5, 5);
            Vector v3;
            cout<<"Wektor 1:";v1.print();
            cout<<"Wektor 2:";v2.print();
            v3=v1.operator-();
            cout<<"Wektor przeciwny do 1:";v3.print();
            v3=v1.operator+(v2);
            cout<<"Wektor otrzymany z dodawania 2 pierwszych:";v3.print();
            v3=v1.operator-(v2);
            cout<<"Wektor otrzymany z odejmowania 2 pierwszych";v3.print();
            iloczyn=v1.operator*(v2);
            cout<<"Iloczyn skalarny:"<<iloczyn<<endl;
            v3=v1.operator*(5);
            cout<<"Wektor otrzymany z mnozenia wektora 1 przez skalar";v3.print();
            if(v1.operator==(v2))
                cout<<"wektor 1 i wektor 2 sa takie same"<<endl;
            else
                cout<<"wektor 1 i wektor 2 sa rozne od siebie"<<endl;
            break;
        }
        case 3: {
            ComplexNumber zespolona1(2, 5), zespolona2(3, -3);
            ComplexNumber z3;
            cout<<"Liczba zespolona 1:";zespolona1.print();
            cout<<"Liczba zespolona 2:";zespolona2.print();
            z3=zespolona1.operator+(zespolona2);
            cout<<"Liczba zespolona otrzymana z dodawania 2 pierwszych";z3.print();
            z3=zespolona1.operator-(zespolona2);
            cout<<"Liczba zespolona otrzymana z odejmowania 2 pierwszych";z3.print();
            z3=zespolona1.operator*(zespolona2);
            cout<<"Liczba zespolona otrzymana z mnozenia 2 pierwszych";z3.print();
            z3=zespolona1.operator/(zespolona2);
            cout<<"Liczba zespolona otrzymana z dzielenia 2 pierwszych";z3.print();
            z3=zespolona1.operator-();
            cout<<"Liczba zespolona sprzezana do liczby zespolonej 1";z3.print();
            break;
        }
        case 4:{
            Node a, b(5,8), c(1, 16);
            Triangle triangle(a, b, c, "First Triangle");

            triangle.display();
            cout << triangle << endl;
            cout << "Distance between first and second point is " << triangle.distance(0,1) << endl;
            showTriangleData(&triangle);
        }
    }
    return 0;
}