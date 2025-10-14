#include <iostream>

using namespace std;

void consonantString(){
    string textUsuar = "hola";
    string newString ="";
    cout << textUsuar <<endl;
    

    for(int i = 0; i < textUsuar.size(); i++)
    {
        char letter = textUsuar[i];

        if (letter == 'a'||letter == 'e' || letter == 'i' || letter == 'o'|| letter == 'u')
        {
            newString = "";
        }
        else
        {
            newString +=
        }
    }
    cout <<newString <<endl;
}

int main(){
    consonantString();
    return 0;
}