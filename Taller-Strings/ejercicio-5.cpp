#include <iostream>

using namespace std;

void palindromeString(){
    string example1 = "reconocer";
    string example2 = "mundo";

    string newString ="";
    string newString2 = "";

    for(int i = example1.size(); i >= 0; i--)
    {
        char letter = example1[i];
        newString += letter;
    }

    cout <<newString<<endl;
    if (example1 == newString)
    {
        cout <<"Es una palabra palindroma" <<endl;
    }
    
    for(int i = example2.size(); i >= 0; i--)
    {
        char letter = example2[i];
        newString2 += letter;
    }

    cout <<newString2<<endl;
    if (example2 == newString2)
    {
        cout <<"Es una palabra palindroma" <<endl;
    }
    

}


int main(){
palindromeString();
    return 0;
}