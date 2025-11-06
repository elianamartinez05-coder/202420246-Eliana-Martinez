#include <iostream>
using namespace std;

int counterString(string frase){
    int contador = 0;
    for (int i = 0; i < frase.size(); i++)
    {
        char letter = frase[i];
        if (letter == ' ')
        {
            contador ++;
        }
        
    }
    return contador;
}



void generalCode(){
    string userFrase;
    cout <<"indrese una frase" <<endl;
    cin >> userFrase;
    cout <<"su frase tiene " <<counterString(userFrase) <<" palabras" <<endl;

}


int main(){
    generalCode();
    return 0;
}