#include<iostream>

using namespace std;

void espaceString(){
    string textOriginal = "Hola";
    string newString ="";
    cout << textOriginal <<endl;


    for(int i = 0; i < textOriginal.size(); i++)
    {
        char letter = textOriginal[i];
        if (letter == ' ')
        {
            newString += "-";
        }
        else
        {
            newString += letter;
        }
        
        cout << newString<<endl;
    }
}

void duplicateString(){
    string textOriginal = "Hola Mundo";
    string newString ="";
    cout << textOriginal <<endl;
    

    for(int i = 0; i < textOriginal.size(); i++)
    {
        char letter = textOriginal[i];
        newString += letter;
        newString += letter;
    }
    cout << newString <<endl;
    
}

void removeVowels(){
    string textOriginal = "Hola";
    string newString ="";
    cout << textOriginal <<endl;
    

    for(int i = 0; i < textOriginal.size(); i++)
    {
        char letter = textOriginal[i];
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' )
        {
            newString = "";
        }
        else
        {
            newString += letter;
        }
        cout <<newString;
    }
     cout <<newString <<endl;
}

void invertString(){
    string textOriginal = "Hola";
    string newString ="";
    cout << textOriginal <<endl;
    

    for(int i = textOriginal.size(); i >= 0; i--)
    {
        char letter = textOriginal[i];
        newString += letter;
    }
    cout <<newString<<endl;
}

void counterString(){
    string textOriginal = "Soy un String";
    string newString ="";
    cout << textOriginal <<endl;
    int counter = 1;

    for(int i = 0; i < textOriginal.size(); i++)
    {
        char letter = textOriginal[i];
        if (letter == ' ')
        {
            counter ++;
        }
        cout<<counter <<endl;
    }
    cout<<counter <<endl;
}

int main(){
    spaceString();
    duplicateString();
    removeVowels();
    invertString();
    counterString();
    return 0;
}