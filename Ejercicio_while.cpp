#include <iostream>
using namespace std;

/*Muestra los primeros N términos 
de la serie de Fibonacci 
utilizando while.*/

int main(void){

    int n = 0;
    int acum = 0;
    int cont = 1;

    cout << "Ingrese n: ";
    cin >> n;

    while(cont <= n){
        acum += cont;
        cont ++;
    }

    cout << acum;

    return 0;
}