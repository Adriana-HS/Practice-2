#include <iostream>
using namespace std;

int main() {
    int num_collar;
    cout << "Ingresar el número del collar" << endl;
    cin >> num_collar;
    if (num_collar == 11235813){
        cout << "\"Se encontro Fibonacci\"." << endl;
    }
    else{
        cout << "\"Esto no es de Fibonacci\"." << endl;
    }
    return 0;
}
