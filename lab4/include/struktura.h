#ifndef REPOZYTORIUM_STRUKTURA_H
#define REPOZYTORIUM_STRUKTURA_H
struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    string stan;
};
struct samochod tablica_aut[5]={{"BMW", "i8", 2019, "bialy", "uzywany"},
                                {"BMW", "i3", 2016, "czerwony", "nowy"},
                                {"BMW", "M3", 2017, "czarny", "po naprawach"},
                                {"BMW", "M2", 2014, "zielony", "uzywany"},
                                {"Lamborghini", "Aventador", 2015, "czarny", "nowy"}};

#endif
