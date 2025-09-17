#include <iostream>
using namespace std;

int greaterThan(int number1, int number2, int number3){

    if (number1>number2 && number1>number3)
    {
        return number1;
    }
    else if (number2>number1 && number2>number3)
    {
        return number2;
    }
    else
    {
        return number3;
    }
    
}

int main(){
    int userNumber1, userNumber2, userNumber3;
    cout <<"Ingrese el primer valor" <<endl;
    cin >> userNumber1;
    cout <<"Ingrese el segundo valor" <<endl;
    cin>> userNumber2;
    cout <<"Ingrese el tercervalor" <<endl;
    cin >> userNumber3;

    int greater = greaterThan(userNumber1, userNumber2, userNumber3);
    cout <<"El numero mayor es: " <<greater <<endl;


    return 0;
}