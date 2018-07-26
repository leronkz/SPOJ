#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int ile;
		cin>>ile;
		int *tablica=new int [ile];
		for(int i=1; i<=ile; i++)
		{
			cin>>tablica[i];
		}
		for(int i=2; i<=ile; i+=2)
		{
			cout<<tablica[i]<<" ";
		}
		for(int i=1; i<=ile; i+=2)
		{
			cout<<tablica[i]<<" ";
		}
		cout<<endl;
		delete [] tablica;
	}
	return 0;
}
