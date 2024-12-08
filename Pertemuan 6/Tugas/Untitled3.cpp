#include <iostream>

using namespace std;

int main()
{
	int a,b=0;
	
	for (a=2;a<=21;a++)
	{
		if (a%2==0)
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
