#include <iostream>
using namespace std;

/*Llena un arreglo con N números 
y cuenta cuántos son pares 
y cuántos son impares.*/

int main(void){
    int n = 0;
    int arreglo[n];
    int pares = 0;
    int impares = 0;

    cout << "Cuantos numeros quiere evaluar? \n";
    cin >> n; 

    for(int i = 1; i <= n; i++){
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