#include <iostream>
using namespace std;

int counterVocal(string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        //cout <<"posicion: " <<letter <<endl;
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            counter ++;
        }
    }
    return counter;
}
int counterConsonant(string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        counter ++;
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            counter --;
        }
    }
    
    return counter;
}
int counterSpecial(string example){
    int counter = 0;

    for (int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        //cout <<"posicion: " <<letter <<endl;
        if(letter >='!'  && letter <= '/')
        {
            counter ++;
        }
    }
    return counter;
}
void counterChar(string example){
    cout <<"Hay " << counterVocal(example) <<" vocales, " <<counterConsonant(example) <<" consonantes y " <<counterSpecial(example) <<" caracteres especiales en tu string" <<endl; 
}


int main(){
    string userString;
    cout <<"Estribe algo" <<endl;
    cin >> userString;
    counterChar(userString);
    return 0;
}