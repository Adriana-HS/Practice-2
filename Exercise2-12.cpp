#include <iostream>
#include <string>
using namespace std;
int main() {
    string color1, color2, color3, color_transeunte;
    int num_pisos1, num_pisos2, num_pisos3, num_pisos_transeunte;
    cout << "Escriba el color de cada casa del vecindario junto al número de pisos a su alrededor y luego el color junto al número de pisos donde vio al gato el testigo:" << endl;
    cin >> color1 >> num_pisos1 >> color2 >> num_pisos2 >> color3 >> num_pisos3 >> color_transeunte >> num_pisos_transeunte;
    if ((color_transeunte == "?" && num_pisos_transeunte == -1)){
        cout << "1\n 2\n 3\n" << endl;
    } 
    if (color_transeunte == "?" or num_pisos_transeunte == -1){
        if (num_pisos_transeunte == num_pisos1 or color_transeunte == color1){
            cout << "1" << endl;
        }
        if (num_pisos_transeunte == num_pisos2 or color_transeunte == color2){
            cout << "2" << endl;
        }
        if (num_pisos_transeunte == num_pisos3 or color_transeunte == color3){
            cout << "3" << endl;
        }
    }
    if (color_transeunte != "?" && num_pisos_transeunte != -1){
        if (num_pisos_transeunte == num_pisos1 and color_transeunte == color1){
            cout << "1" << endl;
        }
        if (num_pisos_transeunte == num_pisos2 and color_transeunte == color2){
            cout << "2" << endl;
        }
        if (num_pisos_transeunte == num_pisos3 and color_transeunte == color3){
            cout << "3" << endl;
        }
    }

    return 0;
}
