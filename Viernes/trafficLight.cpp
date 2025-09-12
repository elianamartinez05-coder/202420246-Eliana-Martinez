#include <iostream>

using namespace std;

void trafficLight(string singnal){
    if (singnal == "rojo")
    {
        cout <<"¡Parar!" <<endl;
    }
    else if (singnal == "amarillo")
    {
        cout <<"Preparese para arrancar" <<endl;
    }
    else if (singnal == "verde")
    {
        cout <<"Arranque" <<endl;
    } 
    else
    {
        cout <<"el color no es de un semaforo" <<endl;
    }
}

int main(){
    string colorLight;
    cout <<"ingrese el color del semaforo" <<endl;
    cin >> colorLight;

    trafficLight (colorLight);
    return 0;
}