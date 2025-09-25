#include <iostream>
using namespace std;

int calculateTotal(int hours, int rate, int total){
    total = hours * rate;
    return total;
}

void printIvoice(string plate, int hours, int rate){
    
    cout << "su placa es: " <<plate <<", horas: " <<hours <<", tarifa: " <<rate <<", total a pagar:" <<endl; 
}

int main(){
    string plateCar;
    int hours, rate;

    cout <<"ingrese el numero de su placa: "<<endl;
    cin >> plateCar;
    cout <<"ahora ingrese las el tiempo en que uso el parqueadero en horas:" <<endl;
    cin >> hours;
    cout <<"ingrese la tarifa del parqueadero: "<<endl;
    cin >> rate;

    int pay;
    pay = calculateTotal();
    cout <<pay <<endl;

    printIvoice(plateCar, hours, rate);

    return 0;
}