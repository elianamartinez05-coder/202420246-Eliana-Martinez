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

bool characterMayus(string passWord){
    int counter = 0;

    for(int i = 0; i < passWord.size(); i++)
    {
        char letter = passWord[i];

        if (letter >='A'  && letter <= 'Z')
        {
            counter ++;
        }
          
    }
    if (counter >= 1)
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

bool characterMinusc(string passWord){
    int counter = 0;

    for(int i = 0; i < passWord.size(); i++)
    {
        char letter = passWord[i];

        if (letter >='a'  && letter <= 'z')
        {
            counter ++;
        }
          
    }
    if (counter >= 1)
    {
        return true;
    }
    else
    {
        return false;
        
    }
    
}


void passwordString(string textExample){ 

    if (characterMin(textExample))
    {
        cout << "contraseña valida" <<endl;
    }
    else
    {
        cout << "contraseña no valida, la contraseña defetener minimo 8 caracteres" <<endl;
    }

    if (characterSpecial(textExample))
    {
        cout << "contraseña valida" <<endl;
    }
    else
    {
        cout << "contraseña no valida, la contraseña tiene que tener minimo 3 caracteres especiales, ej: / % #" <<endl;
    }
    
    if (characterMayus(textExample))
    {
        cout << "contraseña valida" <<endl;
    }
    else
    {
        cout << "contraseña no valida, la contraseña debe tener minimo 1 mayuscula" <<endl;
    }

    if (characterMinusc(textExample))
    {
        cout << "contraseña valida" <<endl;
    }
    else
    {
        cout << "contraseña no valida, la contraseña debe tener minimo 1 minuscula" <<endl;
    }
}



int main(){
    string contraseña;
    cout <<"escriba su contraseña" <<endl;
    cin >> contraseña;
    passwordString(contraseña);
    return 0;
}