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

int main(){
     int userNumber;
    cout <<"escriba el limite de contador";
    cin >> userNumber;

    counter(userNumber);
    return 0;
}