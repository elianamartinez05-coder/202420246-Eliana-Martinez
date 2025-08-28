#include <iostream>

using namespace std;

int main () {
    int multiResult, diviResult, modulResult, sumResult, restResult, selectOperation;
    int Valuer1, Valuer2;
    int divi, multi, modul, sum, rst;
    divi = 2;
    multi = 1;
    modul =3;
    sum = 5;
    rst = 4;
     
    cout << "Ingrese su primer numero: ";
    cin >> Valuer1;
    cout << "Ingrese su segundo numero: ";
    cin >> Valuer2;
    cout << "Multiplicacion = 1 y Division = 2 modulo = 3 Suma = 5 Resta = 4" <<endl;
    cout << "Seleccione el tipo de operacion que desea hacer: ";
    cin >> selectOperation;

    if (selectOperation == 1)
    { 
        multiResult = Valuer1 * Valuer2;
        cout << "El resultado de la multiplicacion es: " << multiResult <<endl;
    }
    else if (selectOperation==2) 
    {
        diviResult = Valuer1 / Valuer2;
        cout << "El resultado de la divicion es: " << diviResult <<endl;
    }
    else if (selectOperation==3) 
    {
        modulResult = Valuer1 % Valuer2;
        cout << "El resultado del modulo es: " << modulResult << endl;
    } 
    else if (selectOperation==4) 
    {
        restResult = Valuer1-Valuer2;
        cout << "El resultado de la resta es: " << restResult << endl;
    } 
    else if (selectOperation==5) 
    {
        sumResult = Valuer1+Valuer2;
        cout << "El resultado de la suma es: " << sumResult << endl;
    } 
}
