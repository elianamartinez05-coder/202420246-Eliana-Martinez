#include <iostream>
using namespace std;

void forWithString(){
    string exampleText = "Hello People!";
    cout <<"size()" <<exampleText.size() <<endl;
    cout <<"posicion 1: " <<exampleText[1] <<endl;
    cout <<"--------------------------------------" <<endl;

    int contador =0;
    for (int i = 0; i < exampleText.size(); i++)
    {

        char textCharacter = exampleText[i];
        //cout <<"posicion " << i  << "-" <<textCharacter<<endl;
        if (textCharacter == 'a' || textCharacter == 'e' || textCharacter == 'i' || textCharacter == 'o' || textCharacter == 'u')
        {
            contador++;
        }
    }
    cout << contador <<endl;
}

int main(){

    forWithString();
    return 0;
}