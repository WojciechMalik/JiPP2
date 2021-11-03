#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H
using namespace std;

int **create_matrix(int **, int, int, string);
double **create_matrix(double **, int, int, string);

void print_matrix(int **, int, int, string);
void print_matrix(double **, int, int, string);

void delete_matrix(int **, int);
void delete_matrix(double **, int);

int **addMatrix(int **, int **, int, int);
double **addMatrix(double **, double **, int, int);

int **subtractMatrix(int **, int **, int, int);
double **subtractMatrix(double **, double **, int, int);

int **multiplyMatrix(int **, int **, int, int, int);
double **multiplyMatrix(double **, double **, int, int, int);

int **multiplyByScalar(int **, int, int, int);
double **multiplyByScalar(double **, int, int, double);

int **transpozeMatrix(int **, int, int);
double **transpozeMatrix(double **, int, int);

int **powerMatrix(int **, int, int, int);
double **powerMatrix(double **, int, int, int);

int determinantMatrix(int **, int, int);
double determinantMatrix(double **, int, int);

bool matrixIsDiagonal(int **, int, int);
bool matrixIsDiagonal(double **, int, int);

void swap(int &, int &);
void swap(double &, double &);

int *sortRow(int *, int);
double *sortRow(double *, int);

int **sortRowsInMatrix(int **, int, int);
double **sortRowsInMatrix(double **, int, int);

void help();

#endif //JIPP2_MATRIXLIB_H