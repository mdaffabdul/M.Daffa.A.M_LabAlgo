#include <iostream>
using namespace std;


int main(){
	int y, z;
	cout << "Nomor 1 - Penjumlahan" << endl;
	cout << "Masukkan dua angka" << endl;
	cout << "Angka pertama: ";
	cin >> y;
	cout << "Angka kedua: ";
	cin >> z;
	
	int hasil_tambah = y + z;
	cout << "Hasilnya adalah: "<< hasil_tambah << endl;
	
	cout << endl;
	
	cout << "Nomor 2 - Pengurangan" << endl;
	cout << "Masukkan dua angka" << endl;
	cout << "Angka pertama: ";
	cin >> y;
	cout << "Angka kedua: ";
	cin >> z;
	
	
	int hasil_kurang = y - z;
	cout << "Hasilnya adalah: "<< hasil_kurang << endl;
	
	cout << endl;

	cout << "Nomor 3 - Perkalian" << endl;
	cout << "Masukkan dua angka" << endl;
	cout << "Angka pertama: ";
	cin >> y;
	cout << "Angka kedua: ";
	cin >> z;
	
	int hasil_kali = y * z;
	cout << "Hasilnya adalah: "<< hasil_kali;
	
	cout << endl;
	
	return 0;
}
