#include <iostream>
using namespace std;

void mostrar_arreglo(int A[], int tam){
    cout << "[ ";
    for(int i = 0; i < tam; i++){
        cout << A[i] << " ";
    }
    cout << "]\n\n";
}

//Filas son lo alto y columnas lo largo.
int main(void){
    int M[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int A[6] = {1,2,3,4,5,6};
    mostrar_arreglo(A, 6);
    M[1][2] = 7;

    return 0;
}