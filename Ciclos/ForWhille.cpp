#include <iostream>

using namespace std;

int main () {
    //contador de 0 a 10
    
       for (int i = 1; i <= 10; i++)
    {
        cout <<"Tabla del: " <<i <<endl;
        for (int j = 1; j <= 10; j++)
        {
            int result = i * j;
            cout <<i <<"x" <<j <<"=" <<result <<endl;
        }
    }
}