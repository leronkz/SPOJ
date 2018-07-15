#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool czy_pierwsza=false;
		int liczba;
		cin>>liczba;
		if(liczba<=1)
		{
			cout<<"NIE"<<endl;
		}
		else if(liczba==2)
		{
			cout<<"TAK"<<endl;
		}
		else
		{
			for(int i=2; i<liczba; i++)
			{
				if(liczba%i!=0)
				{
					czy_pierwsza=true;
				}
				else
				{
					czy_pierwsza=false;
					break;
				}
			}
			if(czy_pierwsza==true)
			{
				cout<<"TAK"<<endl;
			}
			else
			{
				cout<<"NIE"<<endl;
			}
		}
	}
	
	return 0;
}
