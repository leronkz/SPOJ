#include <iostream>
using namespace std;

int main() {
				int n;
				cin>>n;
				long miasta[n];
				long suma=0;
				long maksymalna=0;
				for(int i=0; i<n; i++)
				{
					cin>>miasta[i];
				}
				for(int i=0; i<n; i++)
				{
					suma+=miasta[i];
					if(suma>=maksymalna)
					{
						maksymalna=suma;
					}
					else if(suma<0)
					{
						suma=0;
					}
				}
				cout<<maksymalna<<endl;
	return 0;
}
