#include <iostream>
using namespace std;

int counterVocal(){
    int counter = 0;
    string texto = "Desarrollo de Software";
    for (int i = 0; i < texto.size(); i++)
    {
        char letter = texto[i];
        
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'||letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        {
            counter ++;
        }
    }
    return counter;
}
int counterConsonant(){
    int counter = 0;
    string texto = "Desarrollo de Software";
    for (int i = 0; i < texto.size(); i++)
    {
        char letter = texto[i];
        counter ++;
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'||letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'|| letter == ' ')
        {
            counter --;
        }
    }
    
    return counter;
}
void codigoTotal(){
    cout <<"Desarrollo de Software" <<endl;
    int consonante = counterConsonant();
    int vocal = counterVocal();
    cout <<"El texto tiene " << vocal <<" vocales y " <<consonante <<" consonantes" <<endl;
}

int main(){
    codigoTotal();
    return 0;
}