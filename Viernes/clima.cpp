#include <iostream>

using namespace std;

void weather(int temperature){
    if (temperature<15)
    {
        cout <<"¡esta haciendo frio!" <<endl;
    }
    else if (temperature>25)
    {
        cout <<"¡Esta haciendo calor!" <<endl;
    }
    esle
    {
        cout <<"El clima esta normal" <<endl;
    }
}

int main(){
    int userTemperature;
    cout <<"ingrese la temperatura" <<endl;
    cin >> userTemperature;

    weather (userTemperature)

    return 0;

}