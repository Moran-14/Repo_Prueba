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

void gestionar_turno(int jugador, char tablero[][3]){
    int fila, columna;
    cout << "Turno del jugador #" << jugador << "\n";
    cout << "Escoge una posición: ";
    cin >> fila >> columna;
    //TODO: Se pone el caracter del jugador   
    tablero[fila][columna] = ( (jugador==1)? 'X':'0' );
}

int main(void){
    char tablero[3][3] { {'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'} };

    bool juego_finalizado = false;

    int jugador = 1;
    do{
        mostrar_matrix(tablero, 3, 3);
        gestionar_turno(jugador, tablero);
        jugador = ((jugador==1)?2:1);
    }while(!juego_finalizado);

    return 0;
}