#include <iostream>
#include <string>
using namespace std;

int main() {
    string word_1, word_2, word_3, word_4, word_5;
    char w1, w2, w3, w4, w5;
    cout << "Ingrese 5 palabras:" << endl;
    cin >> word_1 >> word_2 >> word_3 >> word_4 >> word_5;
    w1 = word_1[0];
    w2 = word_2[0];
    w3 = word_3[0];
    w4 = word_4[0];
    w5 = word_5[0];
    if (w1 == w5 ){
        cout << w1 << w2 << w3 << w4 << w5 << endl << "Hemos encontrado algo!" << endl;
    }
    else {
        cout << w1 << w2 << w3 << w4 << w5 << endl << "Aun sin suerte" << endl;
    }
    return 0;
}
