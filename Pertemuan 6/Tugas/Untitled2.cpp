#include <iostream>

using namespace std;

int main()
{
	int a,b=0;
	
	for (a=1;a<=20;a++)
	{
		if (a%2==1)
		{
			cout<<a;
			b+=a;	
		}
		else if (a<=19)
		{
			cout<<" + ";
		}
		else
		{
			cout<<" = "<<b;
		}
	}
}
