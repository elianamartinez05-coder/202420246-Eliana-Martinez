#include <iostream>
using namespace std;

void priceProduct(){
    string products[3] = {"Pan", "Leche", "Queso"};
    float prices[3] = {1500, 3200, 4800};
    string current;
    float currentPrice;
    for (int i = 0; i < 3; i++)
    {
        current = products[i];
        currentPrice = prices[i];
        cout <<"El precio del " <<current <<": " <<currentPrice <<endl;
    }
    

}


int main(){
    priceProduct();
    return 0;
}