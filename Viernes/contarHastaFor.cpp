#include <iostream>

using namespace std;

void counter(int number){
    for (int i = 0; i<=number; i++)
    {
        cout <<"valor: " << i <<endl;
    }
}

int main(){
    int userNumber;
    cout <<"escriba el limite de contador" <<endl;
    cin >> userNumber;

    counter(userNumber);
    return 0;

}