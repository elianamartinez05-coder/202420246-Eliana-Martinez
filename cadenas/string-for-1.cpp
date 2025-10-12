#include <iostream>

using namespace std;

void forWithString(){

    string textOriginal = "otorrinolaringologo";
    int counter = 0;

    for (int i = 0; i < textOriginal.size(); i++)
    {
        char letter = textOriginal[i];
        //cout <<"posicion: " <<letter <<endl;
        if(letter == 'o')
        {
            counter ++;
        }
    }
    cout <<"La palabra tiene: " <<counter <<" o" <<endl;
}



int main(){
    forWithString();

    return 0;
}