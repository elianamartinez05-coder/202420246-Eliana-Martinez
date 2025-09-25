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

void counterRegressive(int number){
    int contador = number;
    while (contador >= 0)
    {
        cout << contador <<endl;
        contador --;
        
        }
    }
    
}

int main(){
    int userNumber;
    cout <<"escriba el limite de contador" <<endl;
    cin >> userNumber;
    cout <<"_________________________________________" <<endl;

    counter(userNumber);

    cout <<"_________________________________________" <<endl;

    counterRegressive(userNumber);
    
    return 0;
}