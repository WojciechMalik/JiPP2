#include "zadania.h"
//#1
int pole(int a, int b, int h){
    return (a+b)*h/2;
}
double pole(double r){
    return M_PI*pow(r, 2);
}
int pole(int a){
    return pow(a, 2);
}
void przeciazenie(){
    int polecenie, dana1, dana2, dana3;
    double dana;
    cout<<"Jakie dzialanie chcesz wykonac?:\n1.Pole trapezu\n2.Pole kola\n3.Pole kwadratu\n";
    cin>>polecenie;
    switch(polecenie){
        case 1:
            cout<<"Podaj a:";
            cin>>dana1;
            cout<<"Podaj b:";
            cin>>dana2;
            cout<<"Podaj h:";
            cin>>dana3;
            cout<<"Pole danego trapezu wynosi: "<<pole(dana1, dana2, dana3);
            break;

        case 2:
            cout<<"Podaj r:";
            cin>>dana;
            cout<<"Pole danego kola wynosi: "<<pole(dana);
            break;

        case 3:
            cout<<"Podaj a:";
            cin>>dana1;
            cout<<"Pole danego kwadratu wynosi: "<<pole(dana1);
            break;
    }
}
//#2
void losowa(){
    int a, b;
    cout<<"Podaj pierwsza liczbe z przedzialu:";
    cin>>a;
    cout<<"Podaj druga liczbe z przedzialu:";
    cin>>b;
    cout<< "Losowa liczba z podanego przedzialu:"<<rand()%b+a;
}
//#3
void najwartosc(){
    int a,b;
    cout<<"Jaka wielkosc ma miec tablica?\n";
    cin>>a;
    int* tablica= new int[a];
    cout<<"Tablica z losowymi liczbami: ";
    for(int i=0; i<a;i++){
        tablica[i]=rand()%100+1;
        cout<<"["<<tablica[i]<<"]";
    }
    b=tablica[0];
    for (int j=0; j<a-1; j++){
        if (b<tablica[j+1]){
            b=tablica[j+1];
        }
    }
    cout<<"\nNajwieksza wartosc:"<<b;
    delete [] tablica;
}
//#4
void odwracanie(int *tablica){
    int tab2[10], i=0, j=9;
    while(i!=10){
        tab2[j]=tablica[i];
        cout<<"["<<tablica[j]<<"]";
        ++i;
        --j;
    }
}
//#5
void wskazniki(){
    double a, b;
    cout<<"Wpisz liczbe:";
    cin>>a;
    cout<<"Wpisz druga liczbe:";
    cin>>b;
    double* x=&a;
    double* y=&b;
    cout<<"Srednia z tych liczb"<<(*x+*y)/2;
}
//#6
void tablica_wieksze_zero() {
    int *tablica = new int[10];
    cout << "Podaj numery do tablicy:";
    for (int i = 0; i < 10; i++) {
        cin >> tablica[i];
    }
    cout << "Numery z tablicy wieksze od 0:";
    for (int j = 0; j < 10; j++) {
        if (*(tablica + j) > 0)
            cout <<"["<<*(tablica + j)<<"]";
    }
}
//#7
void Swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void QuickSort(int **t, int l, int r){
    if(r<=l)return;
    int i=l-1, j=r+1, p=*t[l];
    while(true){
        while(p>*t[++i]);
        while(p<*t[--j]);
        if(i<=j) Swap(t[i],t[j]);
        else break;
    }
    if(j>l) QuickSort(t,l,j);
    if(i<r) QuickSort(t,i,r);
}
void sortowanie(int *a, int *b, int *c, int *d, int *e){
    int *tablica[5]{a,b,c,d,e};
    QuickSort(tablica, 0, 4);
}
//#8
void wpisywanie_do(int a, int **b){
    *b=&a;
    cout<<"Wartosc wpisana  do zmiennej wskazywanej przez wskaznik: "<<*b;
}
//#9
int dzielenie(int a, int b){
    if (b==0) throw "Nie wolno dzielic przez 0";
    if (a%b!=0) throw "Liczba a nie jest podzielna przez liczbe b bez reszty";
    return a/b;
}
void bledy_z_dzielenia(){
    int a, b;
    cout<<"Wpisz 1 liczbe:";
    cin>>a;
    cout<<"Wpisz 2 liczbe:";
    cin>>b;
    try{
        dzielenie(a, b);
    }
    catch (const char *i){
        cout<<"BLAD: "<<i<<endl;
    }
}
//#10
int konwertowanie(string a) {
    int conv = atoi(a.c_str());
    long long x = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] < 48 || a[i] > 57) {
            throw "Wprowadzony ciag zawiera nieprawidlowe znaki.";
        }
    }
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            x *= 10;
            x += a[i] - '0';
            if (x > 2147483647)
                throw "Wprowadzona liczba jest za duza";
        }
    }
        return conv;
    }
    void bledy_z_konwerowania(){
    cout << "Wprowadz ciag znakow:";
    string ciag;
    cin >> ciag;
    try {
        cout << "Skonwertowana liczba:" << konwertowanie(ciag) << endl;
    } catch (const char *i) {
        cout << "BLAD:" << i << endl;
    }
}