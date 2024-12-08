//sturct sederhana
//using namespace std;
//
//int main ()
//{
//	struct mahasiswa {
//		char nim [9];
//		char nama [15];
//		float nilai;
//	};
//	
//	mahasiswa mahasiswa;
//	//clrscr;
//	cout << "Masukkan NIM : ";
//	cin >> mahasiswa.nim;
//	cout << "Masukkan Nama : ";
//	cin >> mahasiswa.nama;
//	cout << "Masukkan nilai akhir : ";
//	cin >> mahasiswa.nilai;
//	cout << "\nData yang diinput adalah : \n\n";
//	cout << "NIM : " << mahasiswa.nim << endl;
//	cout << "Nama : " << mahasiswa.nama << endl;
//	cout << "Nilai : " << mahasiswa.nilai << endl;
//	getchar();
//}

//mengakses Member dalam sturct
#include <iostream>
#include <string>
using namespace std;

struct siswa {
	int no_induk;
	string nama;
	float nilai;

};

int main ()
{
	siswa Arkan, Lukas;
	Arkan.no_induk = 1;
	Arkan.nama = "Arkan Januar";
	Arkan.nilai = 75.5;
	Lukas.no_induk = 2;
	Lukas.nama = "Lukas Laksono";
	Lukas.nilai = 89.9;
	
	cout << Arkan.nama << " dengan momor induk " << Arkan.no_induk << " mendapatkan nilai " << Arkan.nilai << endl;
	cout << Lukas.nama << " dengan momor induk " << Lukas.no_induk << " mendapatkan nilai " << Lukas.nilai << endl;
	return 0;
}

//Menginisialisasi Objek ke dalam Struct
#include <iostream>
#include <string>
using namespace std;

struct siswa {
	int no_induk;
	string nama;
	float nilai;
};

int main ()
{
	siswa Jery = {1, "Jery Januar", 85.5};
	siswa Tono = {2, "Tono Laksono", 89.9};
	cout << Jery.nama << "Mendapatkan nilai " << Jery.nilai << endl;
	cout << Tono.nama << "Mendapatkan nilai " << Tono.nilai << endl;
	return 0;
}


