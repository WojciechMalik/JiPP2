#include <iostream>
#include "struktury_i_klasy.h"

using namespace std;

int main() {
    struct samochod tablica_aut[5]={{"BMW", "i8", 2019, "bialy", "uzywany"},
                                   {"BMW", "i3", 2016, "czerwony", "nowy"},
                                   {"BMW", "M3", 2017, "czarny", "po naprawach"},
                                   {"BMW", "M2", 2014, "zielony", "uzywany"},
                                   {"Lamborghini", "Aventador", 2015, "czarny", "nowy"}};
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
    cout<<"10. Klasa Figura, zawierajaca pole do przechowywania liczby wierzchołków itp"<<endl;

    cin>>wybor;

    switch(wybor){
        case 1:{
            zadanie1(tablica_aut);
            break;
        }
        case 2:{
            zadanie2(tablica_aut);
            break;
        }
        case 3:{
            cout<<"Wybrana marka wystapila "<<zadanie3(tablica_aut,5)<<" razy"<<endl;
            break;
        }
        case 4: {
            cout<<"Rok produkcji jest najnizszy dla samochodu o indeksie(0-4): "<<zadanie4(tablica_aut,5)<<endl;
            break;
        }
        case 5:{

            break;
        }
        case 6:{

            break;
        }
        case 7:{

            break;
        }
        case 8:{

            break;
        }
        case 9:{

            break;
        }
        case 10:{

            break;
        }
    }
    return 0;
}
