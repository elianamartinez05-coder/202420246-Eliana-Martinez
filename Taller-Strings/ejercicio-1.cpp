#include <iostream>

using namespace std;

void consonantString(string textUsuar){
    string newString ="";

    for(int i = 0; i < textUsuar.size(); i++)
    {
        char letter = textUsuar[i];

        if (letter == 'a'||letter == 'e' || letter == 'i' || letter == 'o'|| letter == 'u')
        {
            newString = "";
        }
        else
        {
            newString += letter;
        }
        cout<<newString;
    }
    cout <<newString <<endl;
}

int main(){
    string textUsuar;
    cout <<"escriba una palabra"<<endl;
    cin >> textUsuar;
    consonantString(textUsuar);
    return 0;
}