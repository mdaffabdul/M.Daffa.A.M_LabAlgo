#include <iostream>
using namespace std;

int main() {
    int r;
    const float pi = 3.14286;
    
    cout << "Kalkulator Luas Lingkaran!" << endl;
    cout << "Masukkan jari jari lingkaran = ";
    cin >> r;
    
    float hasil = pi * r * r;
    
    cout << endl;
    
    cout << "Luas lingkarannya adalah:" << endl;
    cout << "jari-jari = " << r << endl;
    cout << "Pi        = " << pi << endl;
    cout << "L         = Pi x r x r" << endl;
    cout << "L         = " << pi << " X " << r << " X " << r << endl;
    cout << "L         = " << hasil << " cm" << endl;
    cout << "Luas Lingkaran dengan jari jari " << r << " cm adalah = " << hasil << " cm^2" << endl;
    
    return 0;
}
