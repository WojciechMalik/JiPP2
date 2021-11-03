#include <iostream>
#include "../../matrixLib/src/matrixLib.cpp"

int main(int argc, char *argv[]){
    int choice_intdouble, m1_rows, m1_columns;
    string choice_functions=argv[1];
    if(choice_functions=="help") {
        help();
        exit(0);
    }
    cout<<"Jakich zmiennych chcesz uzyc?\n[1]-int\n[2]-double"<<endl;
    cin>>choice_intdouble;
    cout<<"Podaj wymiary macierzy:\nIlosc wierszy:";
    cin>>m1_rows;
    cout<<"Ilosc kolumn:";
    cin>>m1_columns;
    if(choice_intdouble==1){
        int **matrix1, **matrix2, **result;
        matrix1=create_matrix(matrix1, m1_rows, m1_columns, "Macierz 1");
        if(choice_functions=="addMatrix"){
            matrix2= create_matrix(matrix2, m1_rows, m1_columns, "Macierz 2");
            result=addMatrix(matrix1, matrix2, m1_rows, m1_columns);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
            delete_matrix(matrix2, m1_rows);
        }
        else if(choice_functions=="subtractMatrix"){
            matrix2= create_matrix(matrix2, m1_rows, m1_columns, "Macierz 2");
            result=subtractMatrix(matrix1, matrix2, m1_rows, m1_columns);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
            delete_matrix(matrix2, m1_rows);
        }
        else if(choice_functions=="multiplyMatrix"){
            int m2_columns;
            cout<<"Podaj ilosc kolumn dla nowej macierzy(ilosc wierszy jest rowna ilosci kolumn 1 macierzy)\nIlosc kolumn:";
            cin>>m2_columns;
            matrix2=create_matrix(matrix2, m1_columns, m2_columns, "Macierz 2");
            result=multiplyMatrix(matrix1, matrix2, m1_rows, m1_columns, m1_columns);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
            delete_matrix(matrix2, m1_columns);
        }
        else if(choice_functions=="multiplyByScalar"){
            int scalar;
            cout<<"Wprowadz skalar(l.calkowita) przez ktory chcesz przemnozyc macierz"<<endl;
            cin>>scalar;
            result= multiplyByScalar(matrix1, m1_rows, m1_columns, scalar);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else if(choice_functions=="transpozeMatrix"){
            result= transpozeMatrix(matrix1, m1_rows, m1_columns);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else if(choice_functions=="powerMatrix"){
            int power;
            cout<<"Wprowadz potege macierzy:";
            cin>>power;
            result=powerMatrix(matrix1, m1_rows, m1_columns, power);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else if(choice_functions=="determinantMatrix"){
            int determinant;
            determinant= determinantMatrix(matrix1, m1_rows, m1_columns);
            cout<<"wyznacznik:"<<determinant;
        }
        else if(choice_functions=="matrixIsDiagonal"){
            int diagonal=matrixIsDiagonal(matrix1, m1_rows, m1_columns);
            if(diagonal)
                cout<<"Podana macierz jest diagonalna."<<endl;
            else
                cout<<"Podana macierz jest diagonalna."<<endl;
        }
        else if(choice_functions=="swap"){
            int number1, number2;
            cout<<"Wpisz dwa numery.\nNumer 1:";
            cin>>number1;
            cout<<"Numer 2:";
            cin>>number2;
            swap(number1, number2);
            cout<<"Numer 1 po zmianach:"<<number1<<endl;
            cout<<"Numer 2 po zmianach:"<<number2<<endl;
        }
        else if(choice_functions=="sortRow"){
            int number_of_row;
            cout<<"Wpisz ktorzy wiersz w macierzy chcialbys posortowac:"<<endl;
            cin>>number_of_row;
            sortRow(matrix1[number_of_row-1], m1_columns);
            print_matrix(matrix1, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else if(choice_functions=="sortRowsInMatrix"){
            sortRowsInMatrix(matrix1, m1_rows, m1_columns);
            print_matrix(matrix1, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else {
            help();
        }
        delete_matrix(matrix1, m1_rows);
    }
    else if(choice_intdouble==2){
        double **matrix1, **matrix2, **result;
        matrix1=create_matrix(matrix1, m1_rows, m1_columns, "Macierz 1");
        if(choice_functions=="addMatrix" || choice_functions=="subtractMatrix"){
            matrix2=create_matrix(matrix2, m1_rows, m1_columns, "Macierz 2");
        }
        else if(choice_functions=="addMatrix"){
            result=addMatrix(matrix1, matrix2, m1_rows, m1_columns);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
            delete_matrix(matrix2, m1_rows);
        }
        else if(choice_functions=="subtractMatrix"){
            result=subtractMatrix(matrix1, matrix2, m1_rows, m1_columns);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
            delete_matrix(matrix2, m1_rows);
        }
        else if(choice_functions=="multiplyMatrix"){
            int m2_columns;
            cout<<"Podaj ilosc kolumn dla nowej macierzy(ilosc wierszy jest rowna ilosci kolumn 1 macierzy)\nIlosc kolumn:";
            cin>>m2_columns;
            matrix2=create_matrix(matrix2, m1_columns, m2_columns, "Macierz 2");
            result=multiplyMatrix(matrix1, matrix2, m1_rows, m1_columns, m1_columns);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
            delete_matrix(matrix2, m1_columns);
        }
        else if(choice_functions=="multiplyByScalar"){
            double scalar;
            cout<<"Wprowadz skalar przez ktory chcesz przemnozyc macierz"<<endl;
            cin>>scalar;
            result= multiplyByScalar(matrix1, m1_rows, m1_columns, scalar);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else if(choice_functions=="transpozeMatrix"){
            result= transpozeMatrix(matrix1, m1_rows, m1_columns);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else if(choice_functions=="powerMatrix"){
            int power;
            cout<<"Wprowadz potege macierzy:";
            cin>>power;
            result= powerMatrix(matrix1, m1_rows, m1_columns, power);
            print_matrix(result, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else if(choice_functions=="determinantMatrix"){
            double determinant;
            determinant= determinantMatrix(matrix1, m1_rows, m1_columns);
            cout<<"Wyznacznik podanej macierzy:"<<determinant;
        }
        else if(choice_functions=="matrixIsDiagonal"){
            int diagonal= matrixIsDiagonal(matrix1, m1_rows, m1_columns);
            if(diagonal)
                cout<<"Podana macierz jest diagonalna."<<endl;
            else
                cout<<"Podana macierz jest diagonalna."<<endl;
        }
        else if(choice_functions=="swap"){
            double number1, number2;
            cout<<"Wpisz dwa numery.\nNumer 1:";
            cin>>number1;
            cout<<"Numer 2:";
            cin>>number2;
            swap(number1, number2);
            cout<<"Numer 1 po zmianach:"<<number1<<endl;
            cout<<"Numer 2 po zmianach:"<<number2<<endl;
        }
        else if(choice_functions=="sortRow"){
            int number_of_row;
            cout<<"Wpisz ktorzy wiersz w macierzy chcialbys posortowac:"<<endl;
            cin>>number_of_row;
            sortRow(matrix1[number_of_row-1], m1_columns);
            print_matrix(matrix1, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else if(choice_functions=="sortRowsInMatrix"){
            sortRowsInMatrix(matrix1, m1_rows, m1_columns);
            print_matrix(matrix1, m1_rows, m1_columns, "Macierz wynikowa");
        }
        else{
            help();
        }
        delete_matrix(matrix1, m1_rows);
    }
    return 0;
}
