#include <iostream>
using namespace std;

int pangkat(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
		return a * pangkat(a, b-1);
	
}

int main ()
{
	int x, y;
	
	cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF\n";
	cout << "\nMasukkan Nilai X = ";
	cin >> x;
	cout << "Masukkan Nilai Y = ";
	cin >> y;
	
	cout << endl;
	
	cout << x << " Dipangkatkan " << y << " = " << pangkat(x,y);
	
	return 0;
}
