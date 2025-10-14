#include <iostream>

using namespace std;

void lowerAndUpperLetter(string example){
    string newString ="";

    for(int i = 0; i < example.size(); i++)
    {
        char letter = example[i];
        char charMinus = letter - 32;
        char newchar = charMinus + 32;
        char charAminus = letter + 32;
        char charAmayus = charAminus -32;
        if (letter == ' ')
        {
            newString += "-";
        }
        
        if (letter >'a' && letter < 'z')
        {
          if (i % 2 == 0)
        {
            newString += charMinus; 
        } 
        else
        {
            newString += newchar;
        }  
        }
        
        
        if (letter >'A' && letter < 'Z')
        {
            if (i % 2 == 0)
            {
                newString += charAmayus;
            }
            else
            {
                newString += charAminus;
            }
            
        }

    }
    cout <<newString <<endl;
}


int main(){
    string textUsuar;
    cout <<"escriba algo" <<endl;
    cin >> textUsuar;
    lowerAndUpperLetter(textUsuar);
    return 0;
}