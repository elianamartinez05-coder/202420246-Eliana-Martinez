#include <iostream>
using namespace std;

int counterSpace(string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        //cout <<"posicion: " <<letter <<endl;
        if(letter == '-')
        {
            counter ++;
        }
    }
    return counter;
}
int counterNumbers(string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        //cout <<"posicion: " <<letter <<endl;
        if(letter >='0'  && letter <= '9')
        {
            counter ++;
        }
    }
    return counter;
}
bool valierMay(string example){
    for(int i = 0; i < example.size(); i++)
    {
        
    }
    char letter = example[example.size()-1];
    if (letter >='A'  && letter <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }

}

void analysis(string example){
    string messages;

    if (valierMay(example))
    {
        messages = "cumple la condicion";
    }
    else
    {
        messages = "no cumple con la condicion";
    }

    cout <<"Tu codigo tiene " <<counterSpace(example) <<" guiones, " <<counterNumbers(example) <<" numeros y " <<messages <<endl;
    
    
}

int main(){
    string codigo;
    cout <<"Escribe tu codigo de forma: A12-BX9-Z y que termine en una letra mayuscula. " <<endl;
    cin >> codigo;

    analysis(codigo);
    return 0;
}