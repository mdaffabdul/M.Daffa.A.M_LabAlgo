#include <iostream>
using namespace std;

//int main()
//{
//	int ilham, amir, *raka;
//	ilham = 75;
//	amir = ilham;
//	raka = &ilham;
//	cout << "Nilai Ilham = " << ilham << endl;
//	cout << "Nilai Amir = " << amir << endl;
//	cout << "Nilai Raka = " << *raka << endl;
//	getchar();
//}

//int main()
//{
//	int yofrie = 93;
//	int *hadiansyah;
//	//clrsc():
//	cout << "Nilai awal yofrie = " << yofrie << endl;
//	hadiansyah = &yofrie;
//	cout << " Nilai hardiansyah sekarang = " << *hadiansyah << endl;
//	*hadiansyah = 50;
//	cout << "Nilai hardiansyah sekarang = " << *hadiansyah << endl;
//	getchar();
//}

//int main()
//{
//	int ilham;
//	int *raka;
//	int **amir;
//	//clrscr();
//	ilham = 75;
//	cout << "Nilai Ilham = " << ilham << endl;
//	raka = &ilham;
//	amir = &raka;
//	
//	cout<< "Nilai Raka Hasil Mengakses Ilham = " << *raka << endl;
//	cout<< "Nilai Amir Hasil Mengakses Ilham = " << **amir << endl;
//	getchar();
//}

int main()
{
	char bandmetal[] = "SEPULTURA";
	char *bandpunk = "RANCID";
	
	cout << "Nama Band Metal : " << bandmetal << endl;
	cout << "Nama Band Punk : " << bandpunk;
	bandpunk += 3;
	cout << "\nNama Band Metal :" << bandmetal << endl;
	cout << "Nama Band Punk : " << bandpunk;
	getchar();
}
