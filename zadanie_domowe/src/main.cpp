#include "calc.h"

int main(int argc, char *argv[]){
    cout<<"dziendobry";
    string dzialanie=argv[2];
    int number=atoi(argv[1]), a=atoi(argv[3]), b=atoi(argv[4]), h=atoi(argv[5]), H=atoi(argv[6]);
    if(number==3){
        if (dzialanie=="add")
            cout<< "Wynik dodawania: "<< add(a, b);

        if (dzialanie=="subtract")
            cout<< "Wynik odejmowania: "<< subtract(a, b);
    }
    if(number==5){
        if(dzialanie=="volume")
            cout<< "Wynik liczenia objetosci: "<< volume(a, b, h, H);
    }
    else
        help(dzialanie);
}




