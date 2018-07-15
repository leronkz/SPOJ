#include <iostream>
#include <math.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
	int n,m;
	cin>>n>>m;
	int czasy[n];
	float ile_ciastek=0;
	float ile_pudelek;
	for(int i=0; i<n; i++)
	{
		cin>>czasy[i];
		ile_ciastek+=floor(86400/czasy[i]);
	}
	ile_pudelek=ile_ciastek/m;
	cout<<ceil(ile_pudelek)<<endl;
}
	return 0;
}
