#ifndef LAB3_ZADANIA_H
#define LAB3_ZADANIA_H
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

//przeciazanie funkcji
int pole(int a, int b, int h);
double pole(double r);
int pole(int a);
void przeciazenie();

//losowanie liczby z przedzialu
void losowa();

//najwieksza wartosc z tablicy
void najwartosc();

//odwracanie tablicy
void odwracanie(int *tablica);

//pobieranie 2 liczb, liczenie sredniej
void wskazniki();

//wypisanie elementow tablicy wiekszych od 0
void tablica_wieksze_zero();

//sortowanie liczb zapisanych w zmiennych w rosnacej kolejnosci
void Swap(int *a, int *b);
void QuickSort(int **t, int l, int r);
void sortowanie(int *a, int *b, int *c, int *d, int *e);

//wpisywanie wartosci do zmiennej wskazywanej przez wskaznik
void wpisywanie_do(int a, int **b);

//dzielenie a przez b
int dzielenie(int a, int b);
void bledy_z_dzielenia();

//konwertowanie znakow na int
int konwertowanie(char tablica[]);
void bledy_z_konwerowania();

#endif
