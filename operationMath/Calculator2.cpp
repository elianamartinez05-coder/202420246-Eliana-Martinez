#include<iostream>

using namespace std;

int main() {
    int ValuerUser1, ValuerUser2;
    int AddResult, SubResult, MultResult, DivResult;
    //Addition = 1 Subtraction = 2  Multiplication = 3 Division = 4
    int SelectUser;

    cout <<"Hola, esta es una calculadora simple" <<endl;
    cout <<"para iniciar el programa inserte el valor #1: ";
    cin >> ValuerUser1;
    cout <<"ahora el valor #2: ";
    cin >> ValuerUser2;
    cout <<"----------------------------------------------" <<endl; 

    cout <<"selecciona la operacion que deseas realizar: " <<endl;
    cout <<"Suma = 1" <<endl;
    cout <<"Resta = 2" <<endl;
    cout <<"Multiplicacion = 3" <<endl;
    cout <<"División = 4" <<endl;
    cin >> SelectUser;

    switch (SelectUser)
    {
        //suma
    case 1:
        AddResult = ValuerUser1 + ValuerUser2;
        cout << ValuerUser1 <<"+" <<ValuerUser2 <<"=" <<AddResult <<endl;
        break;

        //Resta
    case 2:
        SubResult = ValuerUser1 - ValuerUser2;
        cout << ValuerUser1 <<"-" <<ValuerUser2 <<"=" <<SubResult <<endl;
        break;

        //Multiplicación

    case 3:
        MultResult = ValuerUser1 * ValuerUser2;
        cout << ValuerUser1 <<"x" <<ValuerUser2 <<"=" <<MultResult <<endl;
        break;

        //División
    case 4:
        DivResult = ValuerUser1 / ValuerUser2;
        cout << ValuerUser1 <<"/" <<ValuerUser2 <<"=" <<DivResult <<endl;
        break;
    default:
        
        cout <<"La opcion seleccionada no existe :/" <<endl;

        break;
    }

    cout <<"------------------------------------------" <<endl;

    return 0;

}
