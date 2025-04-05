#include <iostream>
using namespace std;
int main() {
    int hora_entrada, hora_salida, tarifa1, tarifa2, tarifa3, cobro1, cobro2, cobro3, cobro_total;
    cout << "Ingrese en números enteros la hora de inicio y la final del alquiler:" << endl;
    cin >> hora_entrada >> hora_salida;
    if ( hora_entrada < 0 or hora_salida > 24){
        cout << "Las horas deben estar entre 0 y 24!" << endl;
   } 
    else if (hora_entrada == hora_salida){
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
    } 
    else if (hora_entrada > hora_salida){
        cout << "Que extraño, el inicio del alquiler es después del final." << endl;
    } 
    else if (hora_salida <= 7 and hora_entrada >= 0) {
        tarifa1 = hora_salida - hora_entrada;
        cobro_total = tarifa1;
        cout << "Has alquilado una bicicleta por" << endl << tarifa1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl <<  "El monto total a pagar es de " << cobro_total << " boliviano(s)" << endl;

    }
    else if (hora_salida <= 17 and hora_entrada >= 7) {
        tarifa2 = (hora_salida - hora_entrada) * 2;
        cobro_total = tarifa2;
        cout << "Has alquilado una bicicleta por" << endl << tarifa2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl <<  "El monto total a pagar es de " << cobro_total << " boliviano(s)" << endl;
    }
    else if (hora_salida <= 17 and hora_entrada >= 24) {
        tarifa3 = hora_salida - hora_entrada;
        cobro_total = tarifa3;
        cout << "Has alquilado una bicicleta por" << endl << tarifa3 << " hora(s) con el tarifario de 1 boliviano(s)" << endl <<  "El monto total a pagar es de " << cobro_total << " boliviano(s)" << endl;
    }
    else if (hora_salida <= 17 and hora_entrada >= 0) {
        tarifa1 = hora_salida - 7;
        tarifa2 = (hora_salida - tarifa1) - hora_entrada;
        cobro2 = tarifa2;
        cobro3 = tarifa1 * 2;
        cobro_total = cobro2 + cobro3;
        cout << "Has alquilado una bicicleta por" << endl << tarifa1 << " hora(s) con el tarifario de 2 boliviano(s)" << endl << tarifa2 << " hora(s) con el tarifario de 1 boliviano(s)" << endl <<  "El monto total a pagar es de " << cobro_total << " boliviano(s)" << endl;
    }
    else if (hora_salida <= 24 and hora_entrada >= 7) {
        tarifa1 = hora_salida - 17;
        tarifa2 = (hora_salida - tarifa1) - hora_entrada;
        cobro2 = tarifa2 * 2;
        cobro3 = tarifa1;
        cobro_total = cobro2 +cobro3;
        cout << "Has alquilado una bicicleta por" << endl << tarifa1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl << tarifa2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl <<  "El monto total a pagar es de " << cobro_total << " boliviano(s)" << endl;
    }
    else if (hora_salida <= 24 and hora_entrada >= 0) {
        tarifa1 = hora_salida - 17;
        tarifa2 = (hora_salida - tarifa1) - 7;
        tarifa3 = ((hora_salida - (tarifa1 + tarifa2)) - hora_entrada) ;
        cobro1 = tarifa3;
        cobro2 = tarifa2 * 2;
        cobro3 = tarifa1;
        cobro_total = cobro1 + cobro2 +cobro3;
        cout << "Has alquilado una bicicleta por" << endl << tarifa1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl << tarifa2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl << tarifa3 << " hora(s) con el tarifario de 1 boliviano(s)" << endl <<  "El monto total a pagar es de " << cobro_total << " boliviano(s)" << endl;
    }
    
    return 0;
}
