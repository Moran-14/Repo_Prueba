#include <iostream>
using namespace std;

void mostrar_matrix(char M[][3], int nfilas, int ncolumnas){
    for(int i = 0; i < nfilas; i++){
        cout << "[ ";
        for (int j = 0; j < ncolumnas; j++){
            cout << M[i][j];
        }
        cout << " ]\n";
    }
}

void gestionar_turno(int jugador){
    int fila, columna;
    cout << "Turno del jugador #" << jugador << "\n";
    cout << "Escoge una posición: ";
    cin >> fila >> columna;
    //Se pone el caracter del jugador   
}


int main(void){
    char tablero[3][3] { {'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'} };
    mostrar_matrix(tablero, 3, 3);

    bool juego_finalizado = false;

    do{
        gestionar_turno(1);
        gestionar_turno(2);
    }while(!juego_finalizado);

    return 0;
}