#include <iostream>
using namespace std;


void printSales(string ventas[], int precio[],int size){
    cout <<"lista actual de ventas: " <<endl;
    cout <<"-----------------------" <<endl;
    for (int i = 0; i < size; i++)
    {
        cout <<"Venta: " <<ventas[i] <<": " <<precio[i] <<endl;
    }
}


void getNewSales(string*& ventas, int*& values, int& size) {
    cout << "Ingrese el numero de ventas a registrar: ";
    cin >> size;

    delete[] ventas;
    delete[] values;

    ventas = new string[size];
    values = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Ingrese el nombre de la venta " << i + 1 << ": ";
        cin >> ventas[i];
        cout << "Ingrese el valor de la venta " << i + 1 << ": ";
        cin >> values[i];
    }
}

void modifySale(string names[], int values[], int size) {
    string searchName;
    cout << "Ingrese el nombre de la venta a modificar: ";
    cin >> searchName;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) 
        {
            cout << "Valor actual: " << values[i] << endl;
            cout << "Ingrese el nuevo valor: ";
            cin >> values[i];
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Venta no encontrada." << endl;
    }
}

void findSale(string ventas[], int precio[], int size) {
    string searchSale;
    cout << "Ingrese el nombre de la venta a buscar: ";
    cin >> searchSale;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (ventas[i] == searchSale) {
            cout << "Venta encontrada en posicion " << i + 1
                 << " -> Valor: " << precio[i] << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Venta no encontrada." << endl;
    }
}

void salesInRange(string ventas[], int values[], int size) {
    int minVal, maxVal;
    cout << "Ingrese el valor minimo: ";
    cin >> minVal;
    cout << "Ingrese el valor maximo: ";
    cin >> maxVal;

    cout << "Ventas en el rango de" << minVal << " a " << maxVal << " :" << endl;
    for (int i = 0; i < size; i++) {
        if (values[i] >= minVal && values[i] <= maxVal) {
            cout << "Venta: " << ventas[i] << " -> Valor: " << values[i] << endl;
        }
    }
}

void calculateTotal(int values[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
        total += values[i];

    cout << "El total de las ventas es: " << total << endl;
}

int getUserAction() {
    int userAction;
    cout << "-----------------------------" << endl;
    cout << "Por favor seleccione:" << endl;
    cout << "1. Registrar o reiniciar ventas." << endl;
    cout << "2. Mostrar todas las ventas." << endl;
    cout << "3. Modificar una venta." << endl;
    cout << "4. Buscar una venta." << endl;
    cout << "5. Mostrar ventas dentro de un rango de precios." << endl;
    cout << "6. Calcular total de ventas." << endl;
    cout << "7. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> userAction;
    cout << "-----------------------------" << endl;
    return userAction;
}

void run() {
    string* saleNames = nullptr;
    int* saleValues = nullptr;
    int size = 0;
    bool running = true;

    while (running) {
        int action = getUserAction();
        switch (action) {
        case 1:
            getNewSales(saleNames, saleValues, size);
            break;
        case 2:
            if (size > 0)
            {
                printSales(saleNames, saleValues, size);
            }
            else
            {
                cout << "No hay ventas registradas." << endl;
            }
            break;
        case 3:
            if (size > 0)
            {
                modifySale(saleNames, saleValues, size);
            }
            else
            {
                cout << "Primero registre las ventas." << endl;
            }
            break;
        case 4:
            if (size > 0)
            {
                findSale(saleNames, saleValues, size);
            }
            else
            {
                cout << "Primero registre las ventas." << endl;
            }
            break;
        case 5:
            if (size > 0)
            {
                salesInRange(saleNames, saleValues, size);
            }
            else
            {
                cout << "Primero registre las ventas." << endl;
            }
            break;
        case 6:
            if (size > 0)
            {
                calculateTotal(saleValues, size);
            }
            else
            {
                cout << "Primero registre las ventas." << endl;
            }
            break;
        case 7:
            running = false;
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
        }
    }

    // Liberar memoria antes de salir
    delete[] saleNames;
    delete[] saleValues;
}


int main(){
    run();
    return 0;
}