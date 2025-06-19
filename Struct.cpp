#include <iostream>
using namespace std;

typedef int entero;

struct Estudiante{
    string nombre;
    string carnet;
    entero edad;
}; 

typedef struct Estudiante{
    string nombre;
    string carnet;
    entero edad;
} Estudiante; 

struct Estudiante crear_estudiantes(){
    Estudiante e;

    cout << "Ingrese el nombre del estudiante: ";
    cin >> e.nombre;
    cout << "Ingrese el carnet del estuidante: ";
    cin >> e.carnet;
    cout << "Ingrese la edad del estudiate: ";
    cin >> e.edad;

    return e;
}

void mostrar_estudiante(struct Estudiante e){
    cout << "Nombre: " << e.nombre << "\n";
    cout << "Carnet: " << e.carnet << "\n";
    cout << "Edad: " << e.edad << "\n";
}

void mostrar_estudiante_por_posicion(struct Estudiante A[], int pos){
    mostrar_estudiante(A[pos]);
}

entero main(){
    struct Estudiante clase[40];
    for (int i = 0; i < 40; i++){
        clase[i] = crear_estudiantes();
    }
    for (int i = 0; i < 40; i++){
        mostrar_estudiante(clase[i]);
    }
    
    entero n;
    cout << "¿Qué estudiante quisieras ver?\n";
    cin >> n;
    mostrar_estudiante(clase[n]);

    return 0;
}