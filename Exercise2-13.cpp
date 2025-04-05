#include <iostream>
using namespace std;
int main() {
    int años_experiencia,edad;
    cout << "Introduzca su edad y los años de experiencia" << endl;
    cin >> edad >> años_experiencia;
    if (edad < 18){
        cout << "No cumples la edad necesaria." << endl;
    }
    if (años_experiencia >= 0 && años_experiencia <=2){
        cout << "Puedes postular a \"coordinador de proyecto\"." << endl;
    }
    if (años_experiencia >= 3 && años_experiencia < 5){
        cout << "Puedes postular a \"director de proyecto\"." << endl;
    }
    if (años_experiencia >= 5){
        cout << "Puedes postular a \"director senior\"." << endl;
    }

    return 0;
}
