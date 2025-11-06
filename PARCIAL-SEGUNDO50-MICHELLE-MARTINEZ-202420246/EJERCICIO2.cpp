#include <iostream>
using namespace std;

void temperatureCountry(float desde, float hasta ){
    float number = 0;
    int counter = 0;
    float suma = 0;
    string ciudad;
    string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga","Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};
    for (int i = 0; i < 10 ; i++)
    {
        number = temperaturas[i];
        ciudad = ciudades[i];
        if (number >= desde && number <= hasta)
        {
            cout <<ciudad <<" : " <<number <<endl;
            suma += number;
            counter ++;

        }
    
    }
    float average = suma/counter;
    cout <<" EL promedio de la temperatura es: " <<average <<"°" <<endl;
    cout <<suma <<endl;
    
    
}

void generalCode(){
    float desde;
    float hasta;
    cout <<"ingrese su rango de temperatura:" <<endl;
    cin >> desde;
    cout <<"hasta" <<endl;
    cin >> hasta;
    temperatureCountry(desde,hasta);
    
}

int main(){
    generalCode();
    return 0;
}