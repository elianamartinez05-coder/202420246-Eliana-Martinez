#include <iostream> 

using namespace std;

int main(){
    int valuerPlayer1, valuerPlayer2;
    cout <<"jugador 1 escoge el numero a adivinar: " <<endl;
    cin >> valuerPlayer1;

    while (valuerPlayer2 != valuerPlayer1)
    {
        cout << "Adivina el numero" <<endl;
        cin >> valuerPlayer2;

        
        if (valuerPlayer2 > valuerPlayer1)
        {
            cout <<"Te pasaste" <<endl;

        }
        else if (valuerPlayer2 < valuerPlayer1)
        {
            cout << "Te falta" <<endl;

        }
        else if (valuerPlayer2 = valuerPlayer1)
        {
            cout << "¡¡¡¡¡Ganaste¡¡¡¡¡" <<endl;

        }

        cout <<"--------------------------------------" <<endl;
    }
    
}