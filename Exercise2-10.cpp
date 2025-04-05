#include <iostream>
using namespace std;

int main() {
    int number_1, number_2, suma, producto, num_dig;
    string cambio;
    cout << "Ingrese dos números enteros no negativos:" << endl;
    cin >> number_1 >> number_2;
    if (number_1 < 0 or number_2 < 0){
        cout << "0" << endl;
    }
    else {
        suma = number_1 + number_2;
        cambio = to_string(suma);
        num_dig = cambio.size();
        producto = num_dig * suma;
        cout << "El resultado es:" << producto << endl;
    }
    return 0;
}
