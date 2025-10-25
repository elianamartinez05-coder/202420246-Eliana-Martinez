#include <iostream>
using namespace std;

int counterSpace(string textOriginal){

     int counter = 1;

    for(int i = 0; i < textOriginal.size(); i++)
    {
        char letter = textOriginal[i];
        if (letter == ' ')
        {
            counter ++;
        }
    }
    return counter;
}
    


int counterPunctuationMark (string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        if(letter == '.' || letter == ',' || letter == ':' || letter == ';' || letter == '"' || letter == '?' || letter == '!')
        {
            counter ++;
        }
    }
    return counter;
}

bool valuerEndPonint(string example){
    for(int i = 0; i < example.size(); i++)
    {
        
    }
    char letter = example[example.size()-1];
    if (letter == '.')
    {
        return true;
    }
    else
    {
        return false;
    }

}

void assessment(string example){
    string textCout;

    if (valuerEndPonint(example))
    {
        textCout = "cumple la condicion";
    }
    else
    {
        textCout = "no cumple la condicion";
    }

    cout <<"Hay " <<counterSpace(example) <<" palabras, " <<counterPunctuationMark(example) <<" signos de puntuacion y " <<textCout <<endl;
}

int main(){
    string phrase;
    cout <<"Escribe una frase" <<endl <<"NOTA:" <<endl <<"-Debe tener punto al final de la frase." <<endl;
    getline (cin, phrase);
    assessment(phrase);
    return 0;
}