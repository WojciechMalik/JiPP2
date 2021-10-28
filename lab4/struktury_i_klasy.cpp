#include "struktury_i_klasy.h"

//Zadanie 1. Wyswietlenie tablicy struktur z samochodami
void zadanie1(struct samochod *tab){
    cout<<"MARKA\tMODEL\tROK_PRODUKCJI\tKOLOR\t"<<endl;
    for(int i=0;i<5;i++){
        cout<<tab[i].marka<<"\t"<<tab[i].model<<"\t"<<tab[i].rok_produkcji<<"\t"<<tab[i].kolor<<endl;
    }
}
//Zadanie2. Wyswietlenie tablicy struktur z samochodami po dodaniu jednej zmiennej w strukturze
void zadanie2(struct samochod *tab){
    cout<<"MARKA\tMODEL\tROK_PRODUKCJI\tKOLOR\tSTAN\t"<<endl;
    for(int i=0;i<5;i++){
        cout<<tab[i].marka<<"\t"<<tab[i].model<<"\t"<<tab[i].rok_produkcji<<"\t"<<tab[i].kolor<<"\t"<<tab[i].stan<<endl;
    }
}
//Zadanie3. Wyswietlanie ilosci samochodow podanej marki
int zadanie3(struct samochod *tab, int liczba){
    string wybrana_marka;
    int pom=0;
    cout<<"Ilosc samochodow jakiej marki chcialbys sprawdzic?";
    cin>>wybrana_marka;
    for(int i=0; i<liczba;i++){
        if(tab[i].marka==wybrana_marka){
            pom++;
        }
    }
    return pom;

}
//Zadanie 4. Wyswietlanie indeksu samochodu ktorego rok produkcji jest najnizszy
int zadanie4(struct samochod *tab, int liczba){
    int indeks, pom=3000;
    for(int i=0; i<liczba; i++){
        if(pom>tab[i].rok_produkcji){
            pom=tab[i].rok_produkcji;
            indeks=i;
        }
    }
    return indeks;
}
//Zadanie 5. Licznie powierzchni prostopadloscianu(klasa prostopadloscian z 3 polami

//Zadanie 6. Obliczanie objetosci kuli(klasa Kula o polu r)

//Zadanie 7. Wyswietlanie danych w postaci funkcji kwadratowej(klasa FunkcjaKwadratowa o polach a, b, c

//Zadanie 8. Klasa Student, Funkcja obliczajaca procent poprawnych odpowiedzi

//Zadanie 9. Obliczanie odleglosci punktow z wykorzystaniem konstruktora

//Zadanie 10. Klasa Figura, zawierajaca pole do przechowywania liczby wierzchołków itp





