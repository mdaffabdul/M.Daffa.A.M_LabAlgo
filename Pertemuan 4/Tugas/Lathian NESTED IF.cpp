#include <iostream>
using namespace std;

int main()
{
	string siswa;
	int nil_1, nil_2, nil_3;
	cout<<"PROGRAM HITUNG NILAI RATA-RATA"<<endl;
	cout<<"Nama Siswa: ";
	cin>>siswa;
	cout<<"Nilai Peretandingan 1: ";
	cin>>nil_1;
	cout<<"Nilai Peretandingan 2: ";
	cin>>nil_2;
	cout<<"Nilai Peretandingan 3: ";
	cin>>nil_3;
	
	double total = (nil_1 + nil_2 + nil_3)/3;
	
	cout<<"Siswa yang bernama "<<siswa<<endl;
	cout<<"Memperoleh nilai rata-rata "<<total<<" dari hasil perlombaan yang di ikutinya ";
	
	if (total<70)
	{
		cout<<"Hadiah yang didapat adalah Hiburan";
	}else
	{
		if (total>=85)
		{
			cout<<"Hadiah yang didapat adalah Komputer Core i5";
		}
		else
		{
			cout<<"Hadiah yang didapat adalah Uang sebesar Rp. 2.500.000";
		}
	}
	
	getchar();
}
