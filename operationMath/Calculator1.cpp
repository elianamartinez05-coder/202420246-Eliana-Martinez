#include <iostream>

using namespace std;

int main () {
    int multiResult, diviResult, modulResult, selectOperation;
    int Valuer1, Valuer2;
    int divi, multi, modul;
    divi = 2;
    multi = 1;
    modul =3;
     
    cout << "Ingrese su primer numero: ";
    cin >> Valuer1;
    cout << "Ingrese su segundo numero: ";
    cin >> Valuer2;
    cout << "Multiplicacion = 1 y Division = 2" <<endl;
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
    
}
