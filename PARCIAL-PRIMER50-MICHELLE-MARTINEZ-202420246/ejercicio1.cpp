#include <iostream>
using namespace std;

void packageNumber(int numberPack){
    if (numberPack % 2 == 0)
    {
        cout <<"Entaron: " <<numberPack <<" paquetes" <<endl;

        for (int i = 2; i <= numberPack; i+= 2)
        {
            cout <<i <<" Paquete revisado" <<endl;
        }
        
    }
    else
    {
        for (int i = 1; i <= numberPack; i+= 2)
        {
            cout <<i <<" Paquete revisado" <<endl;
        }
    }
    

}

int main(){
    int numberPack;
    cout <<"Ingrese el numero de paquetes ingresados" <<endl;
    cin >> numberPack;

    packageNumber(numberPack);

    cout <<"_________________________________________________" <<endl;
    return 0;
}