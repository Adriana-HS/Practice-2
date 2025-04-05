#include <iostream>
using namespace std;
int main() {
    int a, b, c, new_a, new_b, new_c;
    cout << "Ingrese 3 valores enteros:" << endl;
    cin >> a >> b >> c;
    new_a = b;
    new_b = c;
    new_c = a;
    cout << "Los valores son: a = " << a << " b = " << b <<  " y c = " << c << endl <<"Permutamos: a --> b, b --> c, c --> a" << endl << "Los valores despues de la permutacion son:" <<"a = " << new_a << " b = " << new_b << " c = " << new_c << endl;

    return 0;
}
