#include <iostream>

using namespace std;

void week(int day){
    switch (day)
    {
    case 1:
        //lunes//
        cout <<"es Lunes" <<endl;
        break;
    case 2:
        //Martes//
        cout <<"es Martes" <<endl;
        break;
    case 3:
        //Miercoles//
        cout <<"es Miercoles" <<endl;
        break;
    case 4:
        //Jueves//
        cout <<"es Jueves" <<endl;
        break;
    case 5:
        //Viernes//
        cout <<"es Viernes" <<endl;
        break;
    case 6:
        //Sabado//
        cout <<"Sabado" <<endl;
        break;
    case 7:
        //Domingo//
        cout <<"Domingo" <<endl;    
    default:
        cout <<"la opcion seleccionada no existe" <<endl;
        break;
    }
}

int main(){
    int numberDay;
    cout <<"ingrese un numero del 1 al 7" <<endl;
    cin >> numberDay;

    week(numberDay);


    return 0;
}