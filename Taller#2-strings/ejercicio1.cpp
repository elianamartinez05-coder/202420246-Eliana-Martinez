#include <iostream>

using namespace std;
void messenge(){
    cout <<"Escriba un nombre de usuario" <<endl <<"NOTA:" <<endl <<"-Minimo 6 letras maximo 12." <<endl <<"-Una letra al inicio." <<endl <<"-Sin espacios" <<endl;
}

bool valuerLong(string userName){
    int counter = 0;

    for(int i = 0; i < userName.size(); i++)
    {
        char letter = userName[i];
        counter ++;

    }
    if (counter >= 6 && counter <= 12)
    {
        return true;
    }
    
    else
    {
        return false;
    }
}
bool valierMin(string userName){
    for(int i = 0; i < userName.size(); i++)
    {
        
    }
    char letter = userName[0];
    if (letter >='a'  && letter <= 'z' || letter >='A'  && letter <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool valuerSpace(string userName){
    int counter = 0;

    for(int i = 0; i < userName.size(); i++)
    {
        char letter = userName[i];
        if (letter == ' ')
        {
            counter ++;
        }
    }
   
    if (counter >= 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void valuerUser(string userName){
    if (valuerLong(userName) && valierMin(userName) && valuerSpace(userName))
    {
        cout <<"Nombre de usuario valido" <<endl;
    }
    else
    {
        cout <<"Nombre de usuario no valido" <<endl;
    }
}


int main(){
    messenge();
    string userName;
    cin >>userName;
    valuerUser(userName);
    return 0;
}