#include <iostream>
using namespace std;

void counterSign(string sign){
    int positive = 0;
    int negative = 0;
    int average;

    for(int i = 0; i < sign.size(); i++)
    {
        char letter = sign[i];
        if (letter == '-')
        {
            positive++; 
        }
    else
        {
            negative++;
        }
    }

    cout <<"Hay " <<positive <<" señales positivas" <<endl;
    cout <<"Hay " <<negative <<" señales negativas" <<endl;

    if (negative > 0)
    {
        average = positive/negative;
        cout <<"El promedio de señales positivas sobre negativas es: " <<average <<endl;
    }
    else
    {
        cout <<"no se puede sacar el promedio - ERROR :/" <<endl;
    }
    
}


int main(){
    string sign;
    cout <<"señales positivas: -" <<endl <<"señales negativas: ." <<endl;
    cout <<"Escriba su señal" <<endl;
    cin >> sign;
    counterSign(sign);
    return 0;
}