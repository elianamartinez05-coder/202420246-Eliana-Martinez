#include <iostream>
using namespace std;

void ageMaxium(){
    string nombres[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"};
    int edades[5] = {20,16, 22, 15, 19};

    string current;
    int currentEdad;
    for (int i = 0; i < 5; i++)
    {
        current = nombres[i];
        currentEdad = edades[i];
        if (currentEdad >=18)
        {
            cout <<current <<" tiene " <<currentEdad <<" años y es mayor de edad" <<endl;
        }
        
    }
    

}


int main(){
    ageMaxium();
    return 0;
}