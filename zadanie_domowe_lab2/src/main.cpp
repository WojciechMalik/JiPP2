#include "../include/calc.h"

int main(int argc, char *argv[]){
    string dzialanie=argv[1];

    if(argc==4){
        if (dzialanie=="add") {
            cout << "Wynik dodawania: " << add(atoi(argv[2]), atoi(argv[3]));
        }
        if (dzialanie=="subtract")
            cout<< "Wynik odejmowania: "<< subtract(atoi(argv[2]), atoi(argv[3]));
    }
    else if(argc==6){
        if(dzialanie=="volume")
            cout<< "Wynik liczenia objetosci: "<< volume(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]),atoi(argv[5]));
    }
    else
        help(dzialanie);

    return 0;
}




