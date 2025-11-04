#include <iostream>
using namespace std;

void priceProduct(){
    string productos[6] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
    float precios[6] = {1500, 2300, 1800, 3100, 2700, 2600};
    string current;
    float currentPrice;
    for (int i = 0; i < 6; i++)
    {
        current = productos[i];
        currentPrice = precios[i];
        cout <<"El precio de " <<current <<": " <<currentPrice <<endl;
    }
    cout <<"----------------------------------------" <<endl;
    float suma = precios[0]+ precios[1] + precios[2] +precios[3] + precios[4] +precios[5];
    cout <<"el total a pagar por todos los productos es: " <<suma <<endl;
    cout <<"----------------------------------------" <<endl;
    cout <<"los productos mayores o iguales a 2500 son:" <<endl;
    for (int i = 0; i < 6; i++)
    {
        current = productos[i];
        currentPrice = precios[i];
        if (currentPrice >=2500)
        {
            cout <<current <<":" <<currentPrice <<endl; 
        }
    }
    
}


int main(){
    priceProduct();
    return 0;
}