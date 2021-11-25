#include <iostream>
#include "../include/matrixLib.h"


int **create_matrix(int **m1, int m1_r, int m1_c, string choice){
    m1=new int *[m1_r];
    for(int i=0; i<m1_r; i++)
        m1[i]=new int [m1_c];
    if(choice=="Macierz 1"||choice=="Macierz 2") {
        cout << "Wpisz liczby w macierz:" << endl;
        for (int j=0; j<m1_r; j++)
            for (int k=0; k<m1_c; k++)
                cin>>m1[j][k];
        print_matrix(m1, m1_r, m1_c, choice);
    }
    return m1;
}
double **create_matrix(double **m1, int m1_r, int m1_c, string choice){
    m1=new double *[m1_r];
    for(int i=0;i<m1_r;i++)
        m1[i]=new double [m1_c];
    if(choice=="Macierz 1"||choice=="Macierz 2") {
        cout << "Wpisz liczby w macierz:" << endl;
        for (int j = 0; j < m1_r; j++)
            for (int k = 0; k < m1_c; k++)
                cin >> m1[j][k];
        print_matrix(m1, m1_r, m1_c, choice);
    }
    return m1;
}

void print_matrix(int **m1, int m1_r, int m1_c, string matrix){
    cout<<matrix<<endl;
    for(int i=0; i<m1_r; i++){
        for(int j=0; j<m1_c; j++)
            cout<<m1[i][j]<<"\t";
        cout<<endl;
    }
    if(matrix=="Macierz wynikowa")
        delete_matrix(m1, m1_r);
}
void print_matrix(double **m1, int m1_r, int m1_c, string matrix){
    cout<<matrix<<endl;
    for(int i=0; i<m1_r; i++) {
        for (int j = 0; j < m1_c; j++)
            cout << m1[i][j] << "\t";
        cout << endl;
    }
    if(matrix=="Macierz wynikowa")
       delete_matrix(m1, m1_r);
}

void delete_matrix(int **m1, int m1_r){
    for (int i=0; i<m1_r; i++)
        delete [] m1[i];
    delete [] m1;
    m1=NULL;

}
void delete_matrix(double **m1, int m1_r){
    for (int i=0; i<m1_r; i++)
        delete [] m1[i];
    delete [] m1;
    m1=NULL;
}

int **addMatrix(int **m1, int **m2, int m1_r, int m1_c){
    int **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i=0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            result[i][j]=m1[i][j]+m2[i][j];
    return result;
}
double **addMatrix(double **m1, double **m2, int m1_r, int m1_c){
    double **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i=0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            result[i][j]=m1[i][j]+m2[i][j];
    return result;
}

int **subtractMatrix(int **m1, int **m2, int m1_r, int m1_c){
    int **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i=0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            result[i][j]=m1[i][j]-m2[i][j];
    return result;
}
double **subtractMatrix(double **m1, double **m2, int m1_r, int m1_c){
    double **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i=0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            result[i][j]=m1[i][j]-m2[i][j];
    return result;
}

int **multiplyMatrix(int **m1, int **m2, int m1_r, int m1_c, int m2_c){
    int **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i=0; i<m1_r; i++){
        for(int j=0; j<m2_c; j++){
            result[i][j]=0;
            for(int k=0; k<m1_c; k++)
                result[i][j]+=m1[i][k]*m2[k][j];
        }
    }
    return result;
}
double **multiplyMatrix(double **m1, double **m2, int m1_r, int m1_c, int m2_c){
    double **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i=0; i<m1_r; i++){
        for(int j=0; j<m2_c; j++){
            result[i][j]=0;
            for(int k=0; k<m1_c; k++)
                result[i][j]+=m1[i][k]*m2[k][j];
        }
    }
    return result;
}

int **multiplyByScalar(int **m1, int m1_r, int m1_c, int scalar){
    int **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i= 0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            result[i][j]=m1[i][j]*scalar;
    return result;
}
double **multiplyByScalar(double **m1, int m1_r, int m1_c, double scalar){
    double **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i= 0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            result[i][j]=m1[i][j]*scalar;
    return result;
}

int **transpozeMatrix(int **m1, int m1_r, int m1_c){
    int **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i=0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            result[i][j]=m1[j][i];
    return result;
}
double **transpozeMatrix(double **m1, int m1_r, int m1_c){
    double **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    for(int i=0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            result[i][j]=m1[j][i];
    return result;
}

int **powerMatrix(int **m1, int m1_r, int m1_c, int power){
    int **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    result=m1;
    for(int i=0; i<(power-1); i++)
        result=multiplyMatrix(result, m1, m1_r, m1_c, m1_c);
    return result;
}
double **powerMatrix(double **m1, int m1_r, int m1_c, int power){
    double **result=create_matrix(result, m1_r, m1_c, "Macierz wynikowa");
    result=m1;
    for(int i=0; i<(power-1); i++)
        result=multiplyMatrix(result, m1, m1_r, m1_c, m1_c);
    return result;
}

int determinantMatrix(int **m1, int m1_r, int m1_c){
    int determinant=0, sign=-1;
    int **tmp1=create_matrix(tmp1, m1_r, m1_c, "Macierz tymczasowa");
    if(m1_r==1)
        return m1[0][0];

    if(m1_r==2)
        return ((m1[0][0]*m1[1][1])-(m1[1][0]*m1[0][1]));

    else{
        for(int i=0; i<m1_r; i++){
            int tmp2=0, tmp3=0;
            for(int j=1; j<m1_r; j++){
                for(int k=0; k<m1_r; k++){
                    if(k==i)
                        continue;
                    tmp1[tmp2][tmp3]=m1[j][k];
                    tmp3++;
                }
                if(tmp3==(m1_r-1)){
                    tmp2++;
                    tmp3=0;
                }
            }
            sign=-sign;
            determinant=determinant+(sign*m1[0][i]*determinantMatrix(tmp1,m1_r-1,m1_c-1));
        }
    }
    return determinant;
}
double determinantMatrix(double **m1, int m1_r, int m1_c){
    double determinant=0, sign=-1;
    double **tmp1=create_matrix(tmp1, m1_r, m1_c, "Macierz tymczasowa");

    if(m1_r==1)
        return m1[0][0];

    else if(m1_r==2)
        return ((m1[0][0]*m1[1][1])-(m1[1][0]*m1[0][1]));

    else {
        for (int i=0; i<m1_r; i++) {
            int tmp2=0, tmp3=0;
            for (int j=1; j<m1_r; j++) {
                for (int k=0; k<m1_r; k++) {
                    if (k==i)
                        continue;
                    tmp1[tmp2][tmp3]=m1[j][k];
                    tmp3++;
                }
                if (tmp3==(m1_r-1)){
                    tmp2++;
                    tmp3=0;
                }
            }
            sign=-sign;
            determinant=determinant+(sign*m1[0][i]*determinantMatrix(tmp1,m1_r-1,m1_c-1));
        }
    }
    return determinant;
}

bool matrixIsDiagonal(int **m1, int m1_r, int m1_c){
    for(int i=0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            if(i !=j && m1[i][j] !=0)
                return false;

        return true;
}
bool matrixIsDiagonal(double **m1, int m1_r, int m1_c){
    for(int i=0; i<m1_r; i++)
        for(int j=0; j<m1_c; j++)
            if(i !=j && m1[i][j] !=0)
                return false;

    return true;
}

void swap(int &i, int &j){
    int tmp=i;
    i=j;
    j=tmp;
}
void swap(double &i, double &j){
    double tmp=i;
    i=j;
    j=tmp;
}

int *sortRow(int *m1, int m1_c){
    for(int i=0; i<m1_c; i++)
        for(int j=i+1; j<m1_c; j++)
            if(m1[i]>m1[j])
                swap(m1[i], m1[j]);
    return m1;
}
double *sortRow(double *m1, int m1_c){
    for(int i=0; i<m1_c; i++)
        for(int j=i+1; j<m1_c; j++)
            if(m1[i]>m1[j])
                swap(m1[i], m1[j]);
    return m1;
}

int **sortRowsInMatrix(int **m1, int m1_r, int m1_c){
    for(int i=0; i<m1_r; i++)
        sortRow(m1[i], m1_c);
    return m1;
}
double **sortRowsInMatrix(double **m1, int m1_r, int m1_c){
    for(int i=0; i<m1_r; i++)
        sortRow(m1[i], m1_c);
    return m1;
}

void help(){
    cout<<
        "matrixLib\n"
        "Argumenty programu: \n"
        "[1]-nazwa funkcji np. addMatrix\n"
        "Nazwy funkcji i ich dzialanie:\n"
        "addMatrix-Funkcja dodaje do siebie dwie macierze i zwraca sume.\n\tMacierze musza miec takie same wymiary.\n"
        "subtractMatrix-Funkcje odejmuje od siebie dwie macierze i zwraca roznice.\n\tMacierze musza miec takie same wymiary.\n"
        "multiplyMatrix-Funkcja mnozy dwie macierze i zwraca wynik.\n\tWartosc ilosci wierszy drugiej macierzy jest rowna ilosci kolumn pierwszej macierzy.\n"
        "multiplyByScalar-Funkcja mnozy macierz przez skalar i zwraca wynik\n\tSkalar jest tego samego typu co macierz.\n"
        "transpozeMatrix-Funkcja transponuje macierz.\n"
        "powerMatrix-Funkcja podnosi macierz o podaną potege\n\tPotega musi byc liczba dodatnia.\n"
        "determinantMatrix-Funkcja zwraca wyznacznik macierzy.\n\tMacierz musi byc kwadratowa.\n"
        "matrixIsDiagonal-Funkcja sprawdza czy macierz jest diagonalna.\n"
        "swap-Funkcja zamienia dwie wartosci ze soba\n"
        "sortRow-Funkcja sortuje rosnaco tablice poprzez sortowanie babelkowe.\n"
        "sortRowsInMatrix-Funkcja sortuje rosnaco wszystkie wiersze w macierzy.\n";
}