#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
				int t;
				cin>>t;
				long long int liczba,silnia;
				while(t--)
				{
					cin>>liczba;
					silnia=1;
					if(liczba<10)
					{
					for(int i=1; i<=liczba; i++)
					{
						silnia*=i;
					}
					}
					else
					{
					silnia=0;
					}
					cout<<(silnia%100)/10<<" "<<silnia%10<<endl;
				}
	return 0;
}
