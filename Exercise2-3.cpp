#include <iostream>
using namespace std;

int main() {    
    int A, B, div;
    
    cout << "Ingrese dos números enteros para la división de estos:" << endl;
    cin >> A >> B;
    if (((A < 0) or (B < 0)) or ((A > 1000000) or (B > 1000000))){
        cout << "Los números no se encuentran dentro del rango" << endl;
    }
    else if (B == 0){
        cout << "Imposible" << endl;
    }
    else {
        div = A / B;
        cout << div << endl;
    }
    	    return 0;
}
