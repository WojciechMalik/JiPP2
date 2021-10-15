#include <iostream>
using namespace std;

void tablica(int size){
    int tablicka[5][5][5];
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<"{";
            for(int k=0; k<size; k++){
                tablicka[i][j][k]=rand()%9;
                cout<<tablicka[i][j][k]<<" ";
            }
            cout<<"}";
        }
        cout<<"\n";
    }
}

void add(int a, int b, int &c) {
    c = a + b;
}
double add(double a,double b,double c,double d){
    return a+b+c+d;
}

int main(){
    int wybor, size=5, k;
    cout<<"Ktore zadanie chcesz wyswietlic\n1-Powtorzenie z petli\n2-Tablica\n3-Przeciazenie \n";
    cin>>wybor;
    switch (wybor){
        case 1:
            //powtorzenie z petli
            cout<<"Prosze napisac petle, ktora wyswietli 5 razy napis JiPP2.\n";
            for(int i=0; i<5; ++i){
                cout<< "JiPP2" <<endl;
            }
            break;
        case 2:
            cout<<"Prosze utworzyc dowolna tablice dwuwymiarowa oraz dla chetnych trojwymiarowa.\n";
            tablica(size);
            break;
        case 3:
            cout<<"Prosze utworzyc przeciazenie do powyzszej funkcji";
            add(5, 5, k);
            cout << k << endl;
            cout<<"Przeciazenie funkcji"<<add(1.11, 2.22, 3.33, 4.44) <<"\n";
            break;
    }


    return 0;
}
