#include <iostream>
using namespace std;

void counterCharacter(){
    string palabra = "Programacion en C++";
    int counter = 0;
    for (int i = 0; i < palabra.size(); i++)
    {
        counter ++;
    }
    cout <<"El texto tiene " <<counter <<" caracteres" <<endl;
}

void counterCharacterSinEspacios(){
    string palabra = "Programacion en C++";
    int counter = 0;
    for (int i = 0; i < palabra.size(); i++)
    {
        char letter = palabra[i];
        counter ++;
        if (letter == ' ')
        {
            counter --;
        }
        
    }
    cout <<"El texto tiene " <<counter <<" caracteres sin contar los espacios" <<endl;
}
void codigoTotal(){
    cout <<"Programacion en C++" <<endl;
    counterCharacter();
    counterCharacterSinEspacios();
}

int main(){
    codigoTotal();
    return 0;
}