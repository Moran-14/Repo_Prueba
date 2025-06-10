#include <iostream>
using namespace std;

int main(void){
    int n;
    int cont = 1;
    int primo = 0;

    cout << "Ingrese un numero: \n";
    cin >> n;

    cout << "Los primos son: \n"; 
    for(int i = 1; i <= n; i++){
        if(i % n == 0){
            primo = i;
        }
        cout << primo << "\n";
    }


    return 0;
}