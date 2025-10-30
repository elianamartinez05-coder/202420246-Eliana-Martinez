#include <iostream>
using namespace std;

void nameList(){
    string employees[5] = {"Michelle", "Eliana", "Amy", "Katriel","Jacob"};
    for (int i = 0; i < 5; i++)
    {
        
        string arrayValue = employees[i];
        cout << "El nombre del trabajador es " << i <<"-"<<arrayValue  <<endl;
    }
    
}


int main(){
    nameList();
    return 0;
}