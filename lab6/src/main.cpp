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
            Vector v3, v4, v5, v6;
            v3=v1.operator-();
            v4=v1.operator+(v2);
            v5=v1.operator-(v2);
            iloczyn=v1.operator*(v2);
            v6=v1.operator*(5);
            cout<<"Iloczyn skalarny:"<<iloczyn<<endl;
            cout<<"Wektor 1:";v1.print();
            cout<<"Wektor 2:";v2.print();
            cout<<"Wektor przeciwny do 1:";v3.print();
            cout<<"Wektor otrzymany z dodawania 2 pierwszych:";v4.print();
            cout<<"Wektor otrzymany z odejmowania 2 pierwszych";v5.print();
            cout<<"Wektor otrzymany z mnozenia wektora 1 przez skalar";v6.print();
            if(v1.operator==(v2))
                cout<<"wektor 1 i wektor 2 sa takie same"<<endl;
            else
                cout<<"wektor 1 i wektor 2 sa rozne od siebie"<<endl;
            break;
        }
        case 3: {
            ComplexNumber zespolona1(2, 5), zespolona2(3, -3);
            ComplexNumber z3, z4, z5, z6, z7;
            z3=zespolona1.operator+(zespolona2);
            z4=zespolona1.operator-(zespolona2);
            z5=zespolona1.operator*(zespolona2);
            z6=zespolona1.operator/(zespolona2);
            z7=zespolona1.operator-();
            cout<<"Liczba zespolona 1:";zespolona1.print();
            cout<<"Liczba zespolona 2:";zespolona2.print();
            cout<<"Liczba zespolona otrzymana z dodawania 2 pierwszych";z3.print();
            cout<<"Liczba zespolona otrzymana z odejmowania 2 pierwszych";z4.print();
            cout<<"Liczba zespolona otrzymana z mnozenia 2 pierwszych";z5.print();
            cout<<"Liczba zespolona otrzymana z dzielenia 2 pierwszych";z6.print();
            cout<<"Liczba zespolona sprzezana do liczby zespolonej 1";z7.print();
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
}