#include "../include/calc.h"

int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int volume(int a, int b, int h, int H){
    return(a+b)*h/H*2;
}
void help(string a){
    cout<<"Simple calculatur\nsimpleCalc ["<<a<<"]\n\n";
    cout<<"Dzialania: \n";
    if(a=="add")
        cout<<a<<" [a][b]\n     Dodawanie dwoch liczb ([a] i [b]) calkowitych";
    if(a=="subtract")
        cout<<a<<" [a][b]\n     Odejmowanie dwoch liczb ([a] i [b]) calkowitych";
    if(a=="volume")
        cout<<a<<" [a][b][h][H]\n     Obliczanie objetosci graniastoslupa prostego o podstawie trapezu [(a+b)*h)] i wysokosci [H]";

}
