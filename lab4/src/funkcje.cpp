#include "../include/funkcje.h"
#include "../include/struktura.h"

//Zadanie 1. Wyswietlenie tablicy struktur z samochodami
void zadanie1(){
    cout<<"MARKA\tMODEL\tROK_PRODUKCJI\tKOLOR\t"<<endl;
    for(int i=0;i<5;i++)
        cout<<tablica_aut[i].marka<<"\t"<<tablica_aut[i].model<<"\t"<<tablica_aut[i].rok_produkcji<<"\t"<<tablica_aut[i].kolor<<endl;
}
//Zadanie2. Wyswietlenie tablicy struktur z samochodami po dodaniu jednej zmiennej w strukturze
void zadanie2(){
    cout<<"MARKA\tMODEL\tROK_PRODUKCJI\tKOLOR\tSTAN\t"<<endl;
    for(int i=0;i<5;i++)
        cout<<tablica_aut[i].marka<<"\t"<<tablica_aut[i].model<<"\t"<<tablica_aut[i].rok_produkcji<<"\t"<<tablica_aut[i].kolor<<"\t"<<tablica_aut[i].stan<<endl;
}
//Zadanie3. Wyswietlanie ilosci samochodow podanej marki
int zadanie3(int liczba){
    string wybrana_marka;
    int pom=0;
    cout<<"Ilosc samochodow jakiej marki chcialbys sprawdzic?";
    cin>>wybrana_marka;
    for(int i=0; i<liczba;i++)
        if(tablica_aut[i].marka==wybrana_marka)
            pom++;
    return pom;
}
//Zadanie 4. Wyswietlanie indeksu samochodu ktorego rok produkcji jest najnizszy
int zadanie4(int liczba){
    int indeks, pom=3000;
    for(int i=0; i<liczba; i++)
        if(pom>tablica_aut[i].rok_produkcji){
            pom=tablica_aut[i].rok_produkcji;
            indeks=i;
        }
    return indeks;
}
//Zadanie 5. Licznie powierzchni prostopadloscianu(klasa prostopadloscian z 3 polami)
void zadanie5(){
    int pp, pb1, pb2;
    cout<<"Wpisz pole podstawy:";cin>>pp;
    cout<<"Wpisz pole boku 1:";cin>>pb1;
    cout<<"Wpisz pole boku 2:";cin>>pb2;
    Cuboid Prostopadloscian(pp, pb1, pb2);
    cout<<"Pole podanego prostopadloscianu:"<<Prostopadloscian.area();
}
//Zadanie 6. Obliczanie objetosci kuli(klasa Kula o polu r)
void zadanie6(){
    int r;
    cout<<"Wpisz promien kuli";cin>>r;
    Sphere Kula(r);
    cout<<"Objetosc podanej kuli:"<<Kula.volume();
}
//Zadanie 7. Wyswietlanie danych w postaci funkcji kwadratowej(klasa FunkcjaKwadratowa o polach a, b, c
void zadanie7(){
    int a, b, c;
    cout<<"Wpisz parametry funkcji kwadratowej.\na:";cin>>a;
    cout<<"b:";cin>>b;
    cout<<"c:";cin>>c;
    QuadraticFunction FunkcjaKwadratowa(a, b, c);
    cout<<"Podana funkcja kwadratowa: ";
    FunkcjaKwadratowa.print_function();
}
//Zadanie 8. Klasa Student, Funkcja obliczajaca procent poprawnych odpowiedzi
void zadanie8(){
    Student Student1;
    Student1.get_data();
    Student1.print_result();
}
//Zadanie 9. Obliczanie odleglosci punktow z wykorzystaniem konstruktora
void zadanie9(){
    int tab1[2], tab2[2];
    cout<<"Podaj wspolrzedne dla dwoch punktow.\nx1:";cin>>tab1[0];
    cout<<"y1:";cin>>tab1[1];
    cout<<"x2:";cin>>tab2[0];
    cout<<"y2:";cin>>tab2[1];
    Point Punkt(tab1, tab2);
    cout<<"Odleglosc miedzy podanymi punktami wynosi:"<<Punkt.distance_between()<<endl;
}
//Zadanie 10. Klasa Figura, zawierajaca pole do przechowywania liczby wierzcholkow itp
void zadanie10(){
    int **tablica;
    int liczba;
    cout<<"Ile wierzcholkow chcesz przechowac w tablicy?";cin>>liczba;

    tablica= new int *[liczba];
    for (int i = 0; i < liczba; i++)
        for (int j = 0; j < 2; j++)
            tablica[i] = new int[2];

    for(int k=0; k<liczba; k++) {
        cout<<"Podaj wspolrzedne wierzcholka " << k + 1 << "\nx:";cin>>tablica[k][0];
        cout<<"y:";cin>>tablica[k][1];
    }

    Figure Figura(liczba, tablica);
    Figura.print_array();

    for(int i=0; i<liczba; i++)
        delete [] tablica[i];
    delete[] tablica;
    tablica=NULL;
}




