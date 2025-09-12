#include <iostream>

using namespace std;

bool esPar(int number){
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    int userNumber;
    bool isUserNumber;
    cout <<"ingrese un numero" <<endl;
    cin >> userNumber;
    isUserNumber = esPar(userNumber);
    if(isUserNumber)
    {
        cout <<"El numero es Par" <<endl;
    }
    else
    {
        cout <<"El numero es Impar" <<endl;
    }
    return 0;
}