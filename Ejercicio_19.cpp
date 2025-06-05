#include <iostream>
using namespace std;

/*Calcula la tarifa según el consumo: menor a 100 kWh, 
tarifa baja; entre 100 y 200 kWh, tarifa media; 
más de 200 kWh, tarifa alta.*/

int main(void){
    int consumo = 0;
    int tarifa = 0;

    cout << "Cual es su consumo en kwh: \n";
    cin >> consumo;

    if(consumo <= 100){
        tarifa = 20;
        cout << "La tarifa a pagar es: $" << tarifa;    
    }else if(consumo >= 100 && consumo <= 200){
        tarifa = 40;
        cout << "La tarifa a pagar es: $" << tarifa;
    }else{
        tarifa = 60;
        cout << "La tarifa a pagar es: $" << tarifa;
    }

    return 0;
}