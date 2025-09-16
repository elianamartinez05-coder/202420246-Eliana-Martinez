#include <iostream>
using namespace std;

void multiplicationTable(int number){
    cout <<"Tabla del " <<number <<endl;
    for (int i = 1; i<=10; i++)
    {
        int resultMul;
        resultMul = number * i;

        cout <<number <<"X" <<i <<"=" <<resultMul <<endl;
    }
}


int main(){
    int userNumber;
    cout <<"Escriba un numero: " <<endl;
    cin >> userNumber;

    multiplicationTable(userNumber);

    return 0;
}