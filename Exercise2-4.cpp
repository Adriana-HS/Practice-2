#include <iostream>
using namespace std;

int main() {
    float N, A, B, X, Y, descuento, valor_actual;
    cout << "Ingrese el costo original del producto, el primer valor, el segundo valor mayor que el primero y los descuentos:" << endl;
    cin >> N >> A >> B >> X >> Y;
    if (A > B){
        cout << "No se puede producir el descuento" << endl << "ERROR" << endl;
    }
    else if (N > B){
        descuento = (N * Y)/ 100;
        valor_actual = N - descuento;
        cout << valor_actual << endl;  
    }
    else if (N > A){
        descuento = (N * X)/ 100;
        valor_actual = N - descuento;
        cout << valor_actual << endl;
    }
    else {
        cout << N << endl;
    }
    return 0;
}
