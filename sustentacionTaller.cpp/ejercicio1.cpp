#include <iostream>
using namespace std;


int main(){
    string userName;
    int userAge, monthsAge;
    double userStature;
    cout <<"Escribe tu nombre: " <<endl;
    cin >> userName;
    cout <<"Escribe tu edad: " <<endl;
    cin >>userAge;
    cout <<"Escribe tu estatura: " <<endl;
    cin >> userStature;

    monthsAge = userAge * 12;

    cout << "Hola " <<userName <<", tienes " <<monthsAge <<" meses" <<" y mides " <<userStature <<" metros." <<endl;

    return 0;
}