#include <iostream>
using namespace std;

void getStudents(string* nameStudents, float* note, int size){
    cout <<"ingrse cuantos estudiates hay ";
    cin >> size;

    delete[] nameStudents;
    delete[] note;

    nameStudents = new string[size];
    note = new float[size];

    for (int i = 0; i < size; i++)
    {
        cout <<"ingrese el nombre del estudiante #" <<i+1 <<": ";
        cin >> nameStudents[i];
        cout <<"ingrese la nota del estudiante #" <<i+1 <<": ";
        cin >> note[i];
    }
}

void printStudents(string nameStudents[], float note[], int size){
    cout <<"lista de estudiantes:" <<endl;
    cout <<"----------------------------------" <<endl;

    for (int i = 0; i < size; i++)
    {
        cout <<i+1 <<nameStudents[i] <<"nota: " <<note[i] <<endl;
    }   
}

void modifyGrade( string nameStudents, float note, int size){
    string studentSerch;
    cout <<"ingrese el nombre del estudiante al que desea cambiarle la nota: ";
    cin >> studentSerch;
    bool fount = false;

    for (int i = 0; i < size; i++)
    {
        if (nameStudents[i] == studentSerch)
        {
            cout <<"La nota actual del estudiante es: " <<note[i] <<endl;
            cout <<"ingrese la nueva nota: ";
            cin >> note[i];
            fount = true;
            break;
        }
        
    }
    if (fount = false)
    {
        cout <<"estudiante no encontrado " <<endl;
    }

}

void findStudent(string nameStudents, float note, int size){
    string noteSerch;
    cout <<"ingrese el nombre del estudiante al que desea encontrar: ";
    cin >> noteSerch;
    bool fount = false;

    for (int i = 0; i < size; i++)
    {
        if (nameStudents[i] == noteSerch)
        {
            cout <<"La posicion actual del estudiante es: " <<i+1 <<endl;;
            cout <<"La nota actual del estudiante es: " <<note[i] <<endl;
            
            fount = true;
            break;
        }
        
    }
    if (fount = false)
    {
        cout <<"estudiante no encontrado " <<endl;
    }

}



int main(){

    return 0;
}