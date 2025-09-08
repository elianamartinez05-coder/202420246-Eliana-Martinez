#include <iostream>

using namespace std;

void messengerNumberOfOperations (int selectUser) {
    cout <<"Suma = 1" <<endl;
    cout <<"Resta = 2" <<endl;
    cout <<"Multiplicacion = 3" <<endl;
    cout <<"División = 4" <<endl;
    cout <<"Modulo = 5" <<endl;
     cout <<"selecciona la operacion que deseas realizar: " <<endl;
} 

int main() {
    int valuer1, valuer2, selectUser;
    cout <<"Hola, esta es una calculadora simple" <<endl;
    cout <<"para iniciar el programa inserte el valor #1: ";
    cin >> valuer1;
    cout <<"ahora el valor #2: ";
    cin >> valuer2;
    cout <<"----------------------------------------------" <<endl;

    messengerNumberOfOperations (selectUser);
    cin >> selectUser;

}