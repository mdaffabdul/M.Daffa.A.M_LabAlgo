//...program menghitung harga total
#include <iostream>
#include <conio.h>
#define harga 4500.02//...menentukan harga dengan define
using namespace std;

int main(){
	float jumlah,total;
	cout << "masukkan jumlah barang = ";
	cin >> jumlah; total = harga * jumlah;
	cout << "\nyang harus dibayar = " << total;
	getch();
}
