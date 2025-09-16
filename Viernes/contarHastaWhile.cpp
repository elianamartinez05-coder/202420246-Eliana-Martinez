#include <iostream>
using namespace std;

void counter(int number){
    int contador=0;
    while(contador <= number)
    {
        cout << contador <<endl;
        contador ++;
        

    }
}
void regressive(int number){
    for (int i = number; i >= 0; i--)
    {
        cout << "Valor: " << i <<endl;
    }
}
/// @brief 
/// @param number 
void counterRegressive(int number){
    int contador = number;
    while (contador >= number)
    {
        cout << contador <<endl;
        contador --;
    }
    
}

    

int main(){
     int userNumber;
    cout <<"escriba el limite de contador";
    cin >> userNumber;

    counterRegressive(userNumber);
    return 0;
}