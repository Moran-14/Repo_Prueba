#include <iostream>
using namespace std;

void mostrar_matriz(char M[][3], int nfilas, int ncolumnas){
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
    do{
        cout << "Escoge una posición: ";
        cin >> fila >> columna;
        if(tablero[fila][columna] == '-'){
            tablero[fila][columna] = ( (jugador==1)? 'X':'0' );
            break;
        }else{
            cout << "Esa celda ya está ocupada \n";
        }
    }while(true);
}

bool victoria_alcanzada(char M[][3]){

}

int main(void){
    char tablero[3][3] { {'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'} };

    bool juego_finalizado = false;

    int jugador = 1;
    do{
        mostrar_matriz(tablero, 3, 3);
        gestionar_turno(jugador, tablero);
        if(victoria_alcanzada(tablero)){
            mostrar_matriz(tablero, 3, 3);
            cout << "Ha ganado el jugador #" << jugador << "\n";
            juego_finalizado = true;
        }else{
            jugador = ((jugador==1)?2:1);
        }
    }while(!juego_finalizado);

    return 0;
}