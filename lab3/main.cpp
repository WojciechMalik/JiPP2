#include <iostream>
#include "zadania.h"

int main() {
    int nr_zadania;
    cout<<"Ktore zadanie chcesz wykonac?"<<endl;
    cout<<"1. Przeciazanie funkcji"<<endl;
    cout<<"2. Zwracanie losowej liczby z przedzialu"<<endl;
    cout<<"3. Zwracanie najwiekszej wartosci tablicy losowo wypelnionej"<<endl;
    cout<<"4. Odwracanie tablicy"<<endl;
    cout<<"5. Pobieranie 2 liczb, liczenie sredniej"<<endl;
    cout<<"6. Wypisanie elementow tablicy wiekszych od 0"<<endl;
    cout<<"7. Sortowanie liczb zapisanych w zmiennych w rosnacej kolejnosci"<<endl;
    cout<<"8. Wpisywanie wartosci do zmiennej wskazywanej przez wskaznik"<<endl;
    cout<<"9. Dzielenie a przez b"<<endl;
    cout<<"10. Konwertowanie tekstu na int"<<endl;

    cin>>nr_zadania;
    switch(nr_zadania) {
        case 1: {
            przeciazenie();
            break;
        }
        case 2: {
            losowa();
            break;
        }
        case 3: {
            najwartosc();
            break;
        }
        case 4: {
            int tab[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            odwracanie(tab);
            break;
        }
        case 5: {
            wskazniki();
            break;
        }
        case 6: {
            tablica_wieksze_zero();
            break;
        }
        case 7: {
            int a, b, c, d, e;
            cout<<"Wprowadz 5 liczb do sortowania:";
            cin>>a>>b>>c>>d>>e;
            sortowanie(&a, &b, &c, &d, &e);
            cout<<"Wyniki po sortowaniu: ["<<a<<"]["<<b<<"]["<<c<<"]["<<d<<"]["<<e<<"]\n";
            break;
        }
        case 8: {
            int a=10;
            int *b;
            wpisywanie_do(a, &b);
            break;
        }
        case 9: {
            bledy_z_dzielenia();
            break;
        }
        case 10: {
            bledy_z_konwerowania();
            break;
        }
    }


    return 0;
}
