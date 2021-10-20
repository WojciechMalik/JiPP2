#include <iostream>
#include "zadania.h"

int main() {
    int nr_zadania;
    cout<<"Ktore zadanie chcesz wykonac?\n1.Przeciazanie funkcji\n2.Zwracanie losowej liczby z przedzialu\n";
    cin>>nr_zadania;
    switch(nr_zadania){
        case 1:
            przeciazenie();
            break;
        case 2:
            losowa();
            break;
    }


    return 0;
}
