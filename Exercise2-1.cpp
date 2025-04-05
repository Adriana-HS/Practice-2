#include <iostream>
#include <string>
using namespace std;

int main() {    
    string word_1,word_2, word_3;
    cout << "Enter 3 words:" << endl;
    cin >> word_1 >> word_2 >> word_3;
    if (word_1.size() > 30 or word_2.size() > 30 or word_3.size() > 30){
        cout << "Caracteres necesarios superados."s << endl;
    }
    if (word_1 < word_2 && word_1 < word_3){
        cout << word_1;
    }
    else if (word_2 < word_1 && word_2 < word_3){
        cout << word_3;
    }
    else if (word_3 < word_2 && word_3 < word_1){
        cout << word_3;
    }
    else if (word_1 <= word_2 && word_1 <= word_3){
        cout << word_1;
    }

   	    return 0;
}
