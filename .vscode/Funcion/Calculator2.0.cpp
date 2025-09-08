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

void operationCase (int selectUser, int valuer1, int valuer2) {

    int addResult, int subResult, int modulResult, int mulResult, int divResult;

    switch (selectUser)
    {
        //suma
    case 1:
        addResult = valuer1 + valuer2;
        cout << valuer1 <<"+" <<valuer2 <<"=" <<addResult <<endl;
        break;

        //Resta
    case 2:
        subResult = valuer1 - valuer2;
        cout << valuer1 <<"-" << valuer2 <<"=" <<subResult <<endl;
        break;

        //Multiplicación

    case 3:
        mulResult = valuer1 * valuer2;
        cout << valuer1 <<"x" <<valuer2 <<"=" << mulResult <<endl;
        break;

        //División
    case 4:
        divResult= valuer1 / valuer2;
        cout << valuer1 <<"/" << valuer2 <<"=" <<divResult <<endl;
        break;

        //Modulo
    case 5:
        modulResult = valuer1 % valuer2;
        cout << valuer1 <<"%" << valuer2 <<"=" <<modulResult <<endl;
        break;
    default:
        
        cout <<"La opcion seleccionada no existe :/" <<endl;

        break;
    }
}

int main() {
    int valuer1, valuer2, selectUser;
    cout <<"Hola, esta es una calculadora simple" <<endl;
    cout <<"para iniciar el programa inserte el valor #1: ";
    cin >> valuer1;
    cout <<"ahora el valor #2: ";
    cin >> valuer2;
    cout <<"----------------------------------------------" <<endl;

    messengerNumberOfOperations ();
    cin >> selectUser;

    operationCase (selectUser, valuer1, valuer2);

    return 0;

}