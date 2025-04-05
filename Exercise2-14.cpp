#include <iostream>
using namespace std;
int main() {
    int numero_de_documentos;
    cout << "Ingrese el número de documentos encontrados:" << endl;
    cin >> numero_de_documentos;
    if (numero_de_documentos < 0){
        cout << "No se puede tener documentos encontrados en negativo." << endl << "ERROR!" << endl;
    }
    else if (numero_de_documentos == 0){
        cout << "No se encontraron documentos" << endl;
    }
    else if (numero_de_documentos == 1){
        cout << "Se encontro un documento" << endl;
    }
    else {
        cout << numero_de_documentos << " documentos encontrados." << endl;
    }

    return 0;
}
