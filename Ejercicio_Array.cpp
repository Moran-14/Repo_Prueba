#include <iostream>
using namespace std;

/*Llena un arreglo con N números 
y cuenta cuántos son pares 
y cuántos son impares.*/

int main(void){
    int n;
    int arreglo[n];
    int pares = 0;
    int impares = 0;

    cout << "Cuantos numeros quiere evaluar? \n";
    cin >> n; 

    cout << "Ingrese los numeros a evaluar: \n";
    for(int i = 0; i < n; i++){
        cin >> arreglo[i];
        if(arreglo[i] % 2 != 0){
            impares++;
        }else{
            pares++;
        }
    }
    
    cout << "Pares: " << pares << "\n";
    cout << "Impares: " << impares;

    return 0;
}