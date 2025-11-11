#include <iostream>
using namespace std;

string* getNewSales(int size){
    string* ventas = new string[size];
    for (int i = 0; i < size; i++)
    {
        string newVenta;
        int newValue;
        cout << "Ingrese el valor para la posicion " << i + 1 << ": ";
        cin >> newValue;
        cin >> newVenta;
        ventas[i] = newVenta;
        precio[i]= newValue;
    }
    return ventas;

}

int main(){

    return 0;
}