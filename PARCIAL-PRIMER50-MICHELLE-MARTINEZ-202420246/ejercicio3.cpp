#include <iostream>
using namespace std;

bool requiresMaintenance(int leaves, int interval){
    return (leaves % interval == 0);
}

int main(){
    int userLeaves, userInterval;
    cout <<"Ingrese la cantidad de hojas" <<endl;
    cin >> userLeaves;
    cout <<"ingrese el numero de intervalos" <<endl;
    cin >> userInterval;

    if (requiresMaintenance(userLeaves,userInterval))
    {
        cout <<"La maquina requiere mantenimiento" <<endl;
    }
    else
    {
        cout <<"la maquina no requiere mantenimiento" <<endl;
    }
    

    return 0;
}