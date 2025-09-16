#include <iostream>
using namespace std;

void greaterOrLesser(int numberA, int numberB){
    if (numberA <numberB)
    {
        cout <<"El mayor es " <<numberB <<endl;
    }
    else if (numberA>numberB)
    {
        cout <<"El mayor es " <<numberA <<endl;
    }
    else
    {
        cout <<"Son iguales" <<endl;
    }
    
    
}

int main(){
    int number1, number2;
    cout <<"Escribe un numero: " <<endl;
    cin >> number1;
    cout <<"Escribe otro numero:" <<endl;
    cin >> number2;

    greaterOrLesser(number1,number2);

    return 0;
}