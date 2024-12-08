#include <iostream>
using namespace std;

int main() {
    int bilangan;
    bool Prima = true;
    
    cout << "Masukkan sebuah bilangan positif: ";
    cin >> bilangan;
    
    if (bilangan <= 1) {
        Prima = false;
    } else {
        for (int i = 2; i <= bilangan / 2; ++i) {
            if (bilangan % i == 0) {
                Prima = false;
                break;
            }
        }
    }
    
    if (Prima) {
        cout << bilangan << " Termasuk bilangan PRIMA" << endl;
    } else {
        cout << bilangan << " Bukan termasuk bilangan prima" << endl; 
    }
    
    return 0;
}
