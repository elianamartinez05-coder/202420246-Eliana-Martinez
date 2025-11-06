#include <iostream>
using namespace std;

void placaYMulta(string ciudad){
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};
    string current;
    float currentMulta;
    string currentCiudad;
    float suma;
    for (int i = 0; i < 6; i++)
    {
        current = placas[i];
        currentCiudad = ciudades[i];
        currentMulta = multas[i];
        if (currentCiudad == ciudad)
        {
            cout <<"Su placa registrada es " <<current <<" y su multa es de " <<currentMulta <<endl;
            suma += currentMulta; 
        }
        
    }
    cout <<"su multa total es de: " <<suma <<endl;
}
void generalCode(){
    string ciudad;
    cout <<"Escriba la ciudad en que desee ver su placa y multa" <<endl;
    cin >> ciudad;
    placaYMulta(ciudad);
}




int main(){
    generalCode();
    return 0;
}