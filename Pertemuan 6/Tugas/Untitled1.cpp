#include <iostream>
#include <stdio.h>
#include<conio.h>

using namespace std;

int main ()
{
	char lagi;
	int a,b;
	atas:
	//clrscr();
	cout<<"\nMasukkan Bilangan = ";
	cin>>a;
	b=a%2;
	printf("Nilai %d% % 2 adalah = %d",a,b);
	printf("\n\nIngin Hitung Lagi [Y/T] : ");
	cin>>lagi;
	if (lagi == 'Y' || lagi == 'y')
	{
		goto atas;
	}
	else
	{
		goto bawah;
	}
	bawah:
	getch();
}
