#include <iostream>
using namespace std;

bool counterNumbers(string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        if(letter >='0'  && letter <= '9')
        {
            counter ++;
        }
    }
    if (counter >= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool counterSpetial(string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
     
        if(letter >='!'  && letter <= '/')
        {
            counter ++;
        }
    }
    return counter;
    if (counter >= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool counterSpace(string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        if(letter == ' ')
        {
            counter ++;
        }
    }
    return counter;
    if (counter = 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void valuerCode(string example){

    if (counterNumbers(example) && !counterSpace(example) && counterSpetial(example))
    {
        cout <<"su codigo cumple con las condiciones" <<endl;
    }
    else
    {
        cout <<"Su codigo no cumple con las condiciones" <<endl;
    }
}

int main(){
    string codigo;
    cout <<"escribe tu codigo" <<endl;
    cout <<"NOTA" <<endl;
    cout <<"Debe contener al menos un dígito" <<endl;
    cout <<"Debe incluir al menos un símbolo especial (@, #, $, %)" <<endl;
    cout <<"No debe contener espacios." <<endl;
    cin >> codigo;
    valuerCode(codigo);
   
    return 0;
}