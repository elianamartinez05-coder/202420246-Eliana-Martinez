#include <iostream>
using namespace std;

class IntOfArrayManager{

    public:
        string* saleNames = nullptr;
        int* saleValues = nullptr;
        int size = 0;
        bool running = true;

    void run() {
        
        while (running) 
        {
            int action = getUserAction();
            switch (action) {
            case 1:
                getNewSales();
                break;
            case 2:
                if (size > 0)
                {
                    printSales();
                }
                else
                {
                    cout << "No hay ventas registradas." << endl;
                }
                break;
            case 3:
                if (size > 0)
                {
                    modifySale();
                }
                else
                {
                    cout << "Primero registre las ventas." << endl;
                }
                break;
            case 4:
                if (size > 0)
                {
                    findSale();
                }
                else
                {
                    cout << "Primero registre las ventas." << endl;
                }
                break;
            case 5:
                if (size > 0)
                {
                    salesInRange();
                }
                else
                {
                    cout << "Primero registre las ventas." << endl;
                }
                break;
            case 6:
                if (size > 0)
                {
                    calculateTotal();
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

        delete[] saleNames;
        delete[] saleValues;
    }


    void printSales(){
        cout <<"lista actual de ventas: " <<endl;
        cout <<"-----------------------" <<endl;
        for (int i = 0; i < size; i++)
        {
            cout <<"Venta: " <<saleNames[i] <<": " <<saleValues[i] <<endl;
        }
    }

    void getNewSales() {
        cout << "Ingrese el numero de ventas a registrar: ";
        cin >> size;

        delete[] saleNames;
        delete[] saleValues;

        saleNames = new string[size];
        saleValues = new int[size];

        for (int i = 0; i < size; i++) {
            cout << "Ingrese el nombre de la venta " << i + 1 << ": ";
            cin >> saleNames[i];
            cout << "Ingrese el valor de la venta " << i + 1 << ": ";
            cin >> saleValues[i];
        }
    }

    void modifySale() {
        string searchName;
        cout << "Ingrese el nombre de la venta a modificar: ";
        cin >> searchName;
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (saleNames[i] == searchName) 
            {
                cout << "Valor actual: " << saleValues[i] << endl;
                cout << "Ingrese el nuevo valor: ";
                cin >> saleValues[i];
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Venta no encontrada." << endl;
        }
    }
    void findSale() {
        string searchSale;
        cout << "Ingrese el nombre de la venta a buscar: ";
        cin >> searchSale;
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (saleNames[i] == searchSale) {
                cout << "Venta encontrada en posicion " << i + 1
                    << " -> Valor: " << saleValues[i] << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Venta no encontrada." << endl;
        }
    }

    void salesInRange() {
        int minVal, maxVal;
        cout << "Ingrese el valor minimo: ";
        cin >> minVal;
        cout << "Ingrese el valor maximo: ";
        cin >> maxVal;

        cout << "Ventas en el rango de" << minVal << " a " << maxVal << " :" << endl;
        for (int i = 0; i < size; i++) {
            if (saleValues[i] >= minVal && saleValues[i] <= maxVal) {
                cout << "Venta: " << saleNames[i] << " -> Valor: " << saleValues[i] << endl;
            }
        }
    }

    void calculateTotal() {
        int total = 0;
        for (int i = 0; i < size; i++)
            total += saleValues[i];

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
};





int main(){
    IntOfArrayManager arrayManager;
    arrayManager.run();
    return 0;
}