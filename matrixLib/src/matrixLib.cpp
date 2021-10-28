#include "../include/matrixLib.h"

int** CreateMatrix(int,int);
void DeleteMatrix(int**,int);
int** addMatrix(int **matrix1, int **matrix2, int rows, int columns);
int** subtractMatrix(int **matrix1, int **matrix2, int rows, int columns);
int** multiplyMatrix(int **matrix1, int **matrix2, int rows, int columns1, int columns2);
int** multiplyByScalar(int **matrix, int rows, int columns, int scalar);
int** transpozeMatrix(int **matrix, int rows, int columns);
int** powerMatrix(int **matrix, int , unsigned int);
int determinantMatrix(int**,int);
bool matrixIsDiagonal(int**,int);
void swap(int&,int&);
int* sortRow(int*,int);
int** sortRowsInMatrix(int**,int,int);

/*double** CreateMatrixDouble(int,int);
void DeleteMatrix(double**,int);
double** addMatrix(double**,double**,int,int);
double** subtractMatrix(double**,double**,int,int);
double** multiplyMatrix(double**,double**,int,int,int);
double** multiplyByScalar(double**,int,int,double);
double** transpozeMatrix(double**,int,int);
double** powerMatrix(double**,int,unsigned int);
double determinantMatrix(double**,int);
bool matrixIsDiagonal(double**,int);
void swap(double&,double&);
double* sortRow(double*,int);
double** sortRowsInMatrix(double**,int,int);*/
