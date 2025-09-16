#include <iostream>
using namespace std;


int main(){
    string userName;
    int userAge;
    double userStature;
    cout <<"Escribe tu nombre: " <<endl;
    cin >> userName;
    cout <<"Escribe tu edad: " <<endl;
    cin >>userAge;
    cout <<"Escribe tu estatura: " <<endl;
    cin >> userStature;

    cout << "Hola " <<userName <<", tienes " <<userAge <<" y mides " <<userStature <<" metros." <<endl;

    return 0;
}