#include <iostream>
using namespace std;

int main()
{
	int a,*b;
	
	cout << "Masukkan bilangan = ";
	cin >> a;
	
	cout << endl;
	
	if(a % 2 == 0)
	{
		b = &a;
		cout << *b << " ";
		cout << *b+1;
	
	}
	else
	{
		cout << a;	
	}
	
	return 0;
}
