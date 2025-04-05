#include <iostream>
#include <string>
using namespace std;

int main() {    
    string libro_1, libro_2, libro_3;
    cout << "Ingrese el titulo de 3 libros:" << endl;
    getline(cin, libro_1);
    getline(cin, libro_2);
    getline(cin, libro_3);
    cout << libro_3 << endl << libro_2 << endl << libro_1 << endl;
  
    return 0;
}
