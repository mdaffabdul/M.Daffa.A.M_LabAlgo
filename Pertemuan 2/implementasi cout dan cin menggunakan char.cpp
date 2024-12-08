#include <iostream>
using namespace std;

int main()
{
	char y[30]; char z[35]; char x[40];
	
	cout << "Masukkan NPM Anda : ";
	cin >> x;
	cout << "Masukkan Nama Anda : ";
	cin >> y;
	cin.clear();
	cout << "Masukkan Alamat Anda :";
	cin >> z;
	
	
	cout << "NPM Anda Adalah : " << x << endl;
	cout << "Nama Anda Adalah : " << y << endl;
	cout << "Alamat Anda Adalah : " << z << endl;
	
	return 0;
}
