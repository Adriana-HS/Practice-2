#include <iostream>
using namespace std;

int main() {
    int seg, hora =0, min=0, seg_sobrantes;
    cout << "Ingrese los segundos:" << endl;
    cin >> seg;
    if (seg < 0){
        cout << "Error: Input seconds cannot be negative." << endl;
    }
    else {
        if (seg >= 3600){
            seg_sobrantes = seg;
            hora = seg / 3600;
            seg_sobrantes = seg_sobrantes % 3600;
        }
        if (seg_sobrantes >= 60){
            min = seg_sobrantes / 60;
            seg_sobrantes = seg_sobrantes % 60;
        }
        if (hora < 10){
            cout << "0";
        }
        cout << hora << ":"s;
        if (min < 10){
            cout << "0";
        }
        cout << min << ":"s;
        if (seg_sobrantes < 10){
            cout << "0";
        }
        cout << seg_sobrantes;
    }    
    return 0;
}
