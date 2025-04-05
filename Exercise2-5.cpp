#include <iostream>
using namespace std;

int main() {    
    char caracter;
    cout << "Ingrese cualquier carácter:" << endl;
    cin >> caracter;
    if (caracter >= 'a' and caracter <= 'z'){
        cout << "upper-case alphabet" << endl;
    }
    else if (caracter >= 'A' and caracter <= 'Z'){
        cout << "lower-case alphabet" << endl;
    }
    else {
        cout << "not an alphabet" << endl;
    }
    	    return 0;
}
