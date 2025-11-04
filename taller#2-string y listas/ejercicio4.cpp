#include <iostream>
using namespace std;

void maximumAndMinValue(){

    float precios[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
    float highNumber = 0;
    float minNumber = 0;
    for (int i = 0; i < 6; i++)
    {
        if (precios[i]>highNumber)
        {
            highNumber=precios[i];
        }
        if (precios[i]<highNumber)
        {
            minNumber=precios[i];
        }
        
    }
    cout <<"El mayor precio es: " <<highNumber <<endl;
    cout <<"El menor precio es: " <<minNumber <<endl;
}

int main(){
    maximumAndMinValue();
    return 0;
}