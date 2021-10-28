#ifndef LAB4_STRUKTURY_I_KLASY_H
#define LAB4_STRUKTURY_I_KLASY_H
#include <iostream>
using namespace std;

//deklaracja struktury
struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    string stan;
};

//Zadanie 1. Wyswietlenie tablicy struktur z samochodami
void zadanie1(struct samochod *tab);
//Zadanie2. Wyswietlenie tablicy struktur z samochodami po dodaniu jednej zmiennej w strukturze
void zadanie2(struct samochod *tab);
//Zadanie3. Wyswietlanie ilosci samochodow podanej marki
int zadanie3(struct samochod *tab, int liczba);
//Zadanie 4. Wyswietlanie indeksu samochodu ktorego rok produkcji jest najnizszy
int zadanie4(struct samochod *tab, int liczba);
//Zadanie 5. Licznie powierzchni prostopadloscianu(klasa prostopadloscian z 3 polami

//Zadanie 6. Obliczanie objetosci kuli(klasa Kula o polu r)

//Zadanie 7. Wyswietlanie danych w postaci funkcji kwadratowej(klasa FunkcjaKwadratowa o polach a, b, c

//Zadanie 8. Klasa Student, Funkcja obliczajaca procent poprawnych odpowiedzi

//Zadanie 9. Obliczanie odleglosci punktow z wykorzystaniem konstruktora

//Zadanie 10. Klasa Figura, zawierajaca pole do przechowywania liczby wierzchołków itp

#endif //LAB4_STRUKTURY_I_KLASY_H
