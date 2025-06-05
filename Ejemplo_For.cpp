#include <iostream>
using namespace std;

int main(void){
    int n = 4;
    int multiplcacion;

    for (int i = 10; i >= 1; i--){
       multiplcacion = n*i;
       cout << multiplcacion << "\n";
    }

    return 0;
}