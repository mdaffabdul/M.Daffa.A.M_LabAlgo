#include <iostream>
using namespace std;

//int main()
//{
//	int c,d;
//	
//	for(c=1;c<=4;c++)
//	{
//		for(d=1;d<3;d++)
//		{
//			cout<<c;
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	
//	for (a = 1; a<= 5; a++)
//	{
//		for (b = a; b <= 5; b++)
//		{
//			cout << a << " ";
//			
//		}
//		
//		cout << endl;
//	}
//	
//	getchar();
//}

int main ()
{
	int a, b;
	
	cout<<"masukkan batas nilai akhir deret bilangan ganjil : ";
	cin>>b;
	
	for (a=1; a<=b;a+=2)
	{
		cout<<a<<" ";
	}
	getchar();
}
