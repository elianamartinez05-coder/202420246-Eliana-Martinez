#include <iostream>
using namespace std;

void maximumValue(){

    int numbers[6] = {8, 12, 5, 20, 7, 15};
    int highNumber = 0;
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i]>highNumber)
        {
            highNumber=numbers[i];
        }
        
    }
    cout <<"El numero mayor es: " <<highNumber <<endl;
}


int main(){
maximumValue();
    return 0;
}