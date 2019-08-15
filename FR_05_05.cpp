#include <iostream>

using namespace std;

const int MAX = 1000001;

int tab[MAX];

int main()
{
	
	tab[2] = 4;
	tab[3] = 6;
	for(int i=4; i<MAX; i++)
	{
		tab[i] = (tab[i-2]*2)%101010101;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<tab[n]<<endl;
	}
	return 0;	
}
