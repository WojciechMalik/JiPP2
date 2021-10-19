#include "zadania.h"

int pole(int a, int b, int h){
    return (a+b)*h/2;
}
double pole(double r){
    return M_PI*pow(r, 2);
}
int pole(int a){
    return pow(a, 2);
}
void przeciazenie(){
    int polecenie, dana1, dana2, dana3;
    double dana;
    cout<<"Jakie dzialanie chcesz wykonac?:\n1.Pole trapezu\n2.Pole kola\n3.Pole kwadratu\n";
    cin>>polecenie;
    switch(polecenie){
        case 1:
            cout<<"Podaj a:";
            cin>>dana1;
            cout<<"Podaj b:";
            cin>>dana2;
            cout<<"Podaj h:";
            cin>>dana3;
            cout<<"Pole danego trapezu wynosi: "<<pole(dana1, dana2, dana3);
            break;

        case 2:
            cout<<"Podaj r:";
            cin>>dana;
            cout<<"Pole danego kola wynosi: "<<pole(dana);
            break;

        case 3:
            cout<<"Podaj a:";
            cin>>dana1;
            cout<<"Pole danego kwadratu wynosi: "<<pole(dana1);
            break;
    }
}

void losowa(){
    int a, b;
    cout<<"Podaj pierwsza liczbe z przedzialu:";
    cin>>a;
    cout<<"Podaj druga liczbe z przedzialu:";
    cin>>b;
    cout<< "Losowa liczba z podanego przedzialu:"<<rand()%b+a;
}