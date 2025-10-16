#include <iostream>
using namespace std;

bool characterMin(string passWord){
    int counter = 0;

    for(int i = 0; i < passWord.size(); i++)
    {
        char letter = passWord[i];
        counter ++;

           
    }
    if (counter >= 8)
     {
            return true;
        }
        else
        {
            return false;
    }
}

bool characterSpecial(string passWord){
    int counter = 0;

    for(int i = 0; i < passWord.size(); i++)
    {
        char letter = passWord[i];

        if (letter >='!'  && letter <= '/')
        {
            counter ++;
        }
          
    }
    if (counter >= 3)
    {
        return true;
    }
    else
    {
        return false;
        
    }
    
}




void passwordString(){
    string textExample = "miCla%#!/e1234";

    if (characterMin(textExample))
    {
        cout << "contraseña valida" <<endl;
    }
    else
    {
        cout << "contraseña no valida" <<endl;
    }

    if (characterSpecial(textExample))
    {
        cout << "contraseña valida" <<endl;
    }
    else
    {
        cout << "contraseña no valida" <<endl;
    }
    

}



int main(){
    passwordString();
    return 0;
}