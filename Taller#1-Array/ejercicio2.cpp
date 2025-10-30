#include <iostream>
using namespace std;

void gradeAverage(){
    float grades[6]= {3.5, 4.0, 2.8, 3.9, 4.2, 5.0};

    float suma = grades[0] + grades [1]+ grades [2]+ grades [3]+ grades [4]+ grades [5];
    float average = suma/6;
    cout <<"El promedio de las notas del curso es: " <<average <<endl;
}


int main(){
    gradeAverage();
    return 0;
}