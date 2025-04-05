#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float A, B, C, raiz, x1, x2;
    cout << "Introduzca los coeficientes A, B y C de la ecuación cudratica \"Ax² + Bx + C = 0\":" << endl;
    cin >> A >> B >> C;
    raiz = ((B * B)-(4 * (A * C)));
    if (A == 0){
        cout << "Imposible resolver la ecuación" << endl;
    }
    else if (raiz < 0){
        cout << "No existe solución real" << endl;
    }
    else {
        x1 = ((-B + (sqrt (raiz)))/(2 * A));
        x2 = ((-B - (sqrt (raiz)))/(2 * A));
        cout << "X1 = " << x1 << "   " << "X2 = " << x2 << endl;
    }
    
    return 0;
}
