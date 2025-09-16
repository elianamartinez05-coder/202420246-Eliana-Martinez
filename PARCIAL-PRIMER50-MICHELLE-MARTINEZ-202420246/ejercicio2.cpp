#include <iostream>
using namespace std;

void shiftsWorked(int turn1, int turn2){
    if (turn1<=turn2)
    {
        int counter = turn1;
        cout << "La maquina trabajó los turnos: " ;
        while (counter <= turn2)
        {
            cout <<counter <<" ";
            counter ++;
        }
        
    }
    else
    {
        cout <<"Error: el turno inicial no puede ser mayor que el final." <<endl;
    }
}

int main(){
    int initialTurn, finalTurn;
    cout << "¿En que turno inició?: "<<endl;
    cin>> initialTurn;
    cout <<"¿En que turno acabó?" <<endl;
    cin >> finalTurn;

    shiftsWorked(initialTurn, finalTurn);

    return 0;
}