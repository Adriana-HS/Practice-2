#include <iostream>
using namespace std;

int main() {    
    float area, radio;
    cout << "Ingrese el radio de la esfera:" << endl;
    cin >> radio;
    if (radio < 0){
        cout << "Error: Radius cannot be negative." << endl;
    }
    else{
        area = (4 * 3.141592)* (radio * radio);
        cout << "El area es: " << area << endl;
    }
    return 0;
}
