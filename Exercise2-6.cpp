#include <iostream>
using namespace std;
int main() {
   int mes;
   cout << " Ingrese un número del día de la semana:" << endl;
   cin >> mes;
   switch (mes){
       case 1:
       cout << "Lunes" << endl; break;
       case 2:
       cout << "Martes" << endl; break;
       case 3:
       cout << "Miercoles" << endl; break;
       case 4:
       cout << "Jueves" << endl; break;
       case 5:       
       cout << "Viernes" << endl; break;
       case 6:
       cout << "Sábado" << endl; break;
       case 7:
       cout << "Domingo" << endl; break;
       default:
       cout << "Invalid input" << endl;
   }
   return 0;
}
