#include <iostream>
using namespace std;

void evenNumber(){
    int number;
    int contador = 0;
    int values[8] = {2, 5, 7, 8, 10, 13, 16, 19};
    for (int i = 0; i < 8; i++)
    {
        number = values[i];
        if (number % 2 == 0)
        {
            cout <<number <<" es un numero par"  <<endl;
            contador++;
        }
    }
    cout << "Hay " <<contador <<" numeros pares" <<endl;
}


int main(){
    evenNumber();
    return 0;
}