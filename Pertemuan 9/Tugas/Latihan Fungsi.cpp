#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

void lpersegi (int s)
{
	int lp;
	lp = s * s;
	cout << "Luas Persegi = " << s << " X " << s << " = " << lp << endl << endl;
}

void lpersegip (int p, int l)
{
	int luasp;
	luasp = p * l;
	cout << "Luas Persegi Panjang = " << p << " X " << l << " = " << luasp << endl << endl;
}

void ltabung (int r, int t)
{
	const float pi = 3.14;
	float luast;
	luast = 2 * pi * r * (r + t);
	cout << "Luas Tabung = " << "2 X " << pi << " X " << r << " X (" << r << " + " << t << ") = " << luast << endl << endl;
}

void vtabung (int r, int t)
{
	const float pi = 3.14;
	float vtab;
	vtab = pi * pow(r, 2) * t;
	cout << "Volume Tabung = " << pi << " X " << r << "^ X " << t << " = " << vtab << endl << endl;
}

int main()
{
	int a, b;
	
	for (int c = 1; c <= 2; c++)
	{
		cout << "Perhitungan Luas Persegi" << endl;
		cout << "Masukkan Sisi = ";
		cin >> a;
		lpersegi(a);
		cout << "\n===============================================\n";
	}
	
	for (int d = 1; d <= 2; d++)
	{
		cout << "Perhitungan Luas Persegi Panjang" << endl;
		cout << "Masukkan Panjang = ";
		cin >> a;
		cout << "Masukkan Lebar = ";
		cin >> b;
		lpersegip(a,b);
		cout << "\n===============================================\n";
	}
	
	for (int e = 1; e <= 2; e++)
	{
		cout << "Perhitungan Luas Tabung" << endl;
		cout << "Masukkan Jari Jari = ";
		cin >> a;
		cout << "Masukkan Tinggi = ";
		cin >> b;
		ltabung(a,b);
		cout << "\n===============================================\n";
	}
	
	for (int f = 1; f <= 2; f++)
	{
		cout << "Perhitungan Volume Tabung" << endl;
		cout << "Masukkan Jari Jari = ";
		cin >> a;
		cout << "Masukkan Tinggi = ";
		cin >> b;
		vtabung(a,b);
		cout << "\n===============================================\n";
	}
	
	
	getche();
}
