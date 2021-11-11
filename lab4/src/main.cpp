#include <iostream>
#include "../include/funkcje.h"

using namespace std;

int main() {
    int wybor;
    cout<<"Jaki program chcesz wyswietlic?"<<endl;
    cout<<"1. Wyswietlenie tablicy struktur z samochodami"<<endl;
    cout<<"2. Wyswietlenie tablicy struktur z samochodami po dodaniu jednej zmiennej w strukturze"<<endl;
    cout<<"3. Wyswietlanie ilosci samochodow podanej marki"<<endl;
    cout<<"4. Wyswietlanie indeksu samochodu ktorego rok produkcji jest najnizszy"<<endl;
    cout<<"5. Licznie powierzchni prostopadloscianu(klasa prostopadloscian z 3 polami"<<endl;
    cout<<"6. Obliczanie objetosci kuli(klasa Kula o polu r)"<<endl;
    cout<<"7. Wyswietlanie danych w postaci funkcji kwadratowej(klasa FunkcjaKwadratowa o polach a, b, c"<<endl;
    cout<<"8. Klasa Student, Funkcja obliczajaca procent poprawnych odpowiedzi"<<endl;
    cout<<"9. Obliczanie odleglosci punktow z wykorzystaniem konstruktora"<<endl;
    cout<<"10. Klasa Figura, zawierajaca pole do przechowywania liczby wierzcholkow itp"<<endl;
    cin>>wybor;
    switch(wybor){
        case 1:{
            zadanie1();
            break;
        }
        case 2:{
            zadanie2();
            break;
        }
        case 3:{
            cout<<"Wybrana marka wystapila "<<zadanie3(5)<<" razy"<<endl;
            break;
        }
        case 4: {
            cout<<"Rok produkcji jest najnizszy dla samochodu o indeksie(0-4): "<<zadanie4(5)<<endl;
            break;
        }
        case 5:{
            zadanie5();
            break;
        }
        case 6:{
            zadanie6();
            break;
        }
        case 7:{
            zadanie7();
            break;
        }
        case 8:{
            zadanie8();
            break;
        }
        case 9:{
            zadanie9();
            break;
        }
        case 10:{
            zadanie10();
            break;
        }
    }
    return 0;
}
