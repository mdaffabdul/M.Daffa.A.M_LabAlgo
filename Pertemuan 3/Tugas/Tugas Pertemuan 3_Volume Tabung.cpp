#include <iostream>
using namespace std;

int main() {
    int r;
    int t;
    const float pi = 3.14286;
    
    cout << "Kalkulator Volume Tabung!" << endl;
    cout << "Masukkan jari jari lingkaran = ";
    cin >> r;
    cout << "Masukkan tinggi tabung = ";
    cin >> t;
    
    float hasil = pi * r * r * t;
    
    cout << endl;
    
    cout << "Volume Tabungnya adalah:" << endl;
    cout << "jari-jari = " << r << endl;
    cout << "tinggi    = " << t << endl;
    cout << "Pi        = " << pi << endl;
    cout << "V         = Pi x r x r x t" << endl;
    cout << "V         = " << pi << " X " << r << " X " << r << " X " << t << endl;
    cout << "V         = " << hasil << " cm" << endl;
    cout << "Volume Tabung dengan jari jari " << r << "cm" << "Dan Tinggi " << t << " cm adalah = " << hasil << " cm^2" << endl;
     
    return 0;
}
