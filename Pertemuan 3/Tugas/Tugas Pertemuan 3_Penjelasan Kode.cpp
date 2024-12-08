#include <iostream>  // Menyertakan library untuk input/output
using namespace std; // Menggunakan namespace std untuk memudahkan penulisan cout, cin, dll.

int main() {
    // Inisialisasi variabel
    int x = 50;  // Mendeklarasikan dan menginisialisasi x dengan nilai 50
    
    int a, b, c, d, e;  // Mendeklarasikan variabel untuk menyimpan hasil operasi logika

    // Proses operasi logika
    a = x > 5 + 5;  // a akan bernilai 1 (true) karena 50 > 10
    b = x > 100;    // b akan bernilai 0 (false) karena 50 tidak > 100
    c = a && b;     // c akan bernilai 0 (false) karena operasi AND, di mana 1 && 0 = 0
    d = a || b;     // d akan bernilai 1 (true) karena operasi OR, di mana 1 || 0 = 1
    e = !(c);       // e akan bernilai 1 (true) karena NOT dari 0 adalah 1

    // Output berupa 1 (benar) dan 0 (salah)
    cout << "\nNilai a=x>5+5=" << a << endl;  // Mencetak nilai a (1)
    cout << "\nNilai b=x>100=" << b << endl;  // Mencetak nilai b (0)
    cout << "\nNilai c=a&&b=" << c << endl;   // Mencetak nilai c (0)
    cout << "\nNilai d=a||b=" << d << endl;   // Mencetak nilai d (1)
    cout << "\nNilai e=!(c)=" << e << endl;   // Mencetak nilai e (1)

    getchar();  // Penganti return 0 sebagai penutup atau penanda akhir kode
}
