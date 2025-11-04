#include <iostream>
using namespace std;

void edadesAverage(){
    int edades[6] = {18, 21, 25, 30, 27, 22};
    for (int i = 0; i < 6; i++)
    {
        cout << "edad = "<<edades[i]  <<endl;
    }
    float suma = edades[0] + edades[1]+  edades[2]+ edades[3]+ edades[4]+ edades[5];
    float average = suma/6;
    cout <<"El promedio de las edades es: " <<average <<endl;
    
}




int main(){
    edadesAverage();
    return 0;
}