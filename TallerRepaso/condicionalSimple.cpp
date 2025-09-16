#include <iostream>
using namespace std;

void numberClassification(double number){

    if (number < 0)
    {
        cout <<"Su numero es negativo" <<endl;
    }
    else if (number = 0)
    {
        cout <<"Su numero es 0";
    }
    else
    {
        cout <<"Su numero es positivo" <<endl;
    }
}

int main(){
    double userNumber;
    cout  <<"Escribe un numero" <<endl;
    cin >> userNumber;

    numberClassification(userNumber);

    return 0;
}