#include <iostream>

 using namespace std;

void messagePassOrNotPass (int noteUser){
    if (noteUser < 3)
    {
        cout <<"Usted reprobó la materia" <<endl;
    } 
    else
    {
        cout << "Usted aprobó la materia" <<endl;

    }
    cout<<"__________________________________________" <<endl;
    
}  

 int main () {
    int noteUser;

    cout<<"Por favor ingrese su nota: ";
    cin >> noteUser;

    messagePassOrNotPass(noteUser);

    return 0;

 }