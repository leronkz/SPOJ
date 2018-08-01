#include <iostream>
#include <iomanip>

using namespace std;
int d;
float a,b;
float pierwsza_obnizka,druga_obnizka,ile;
int main()
{
	cin>>d;
	while(d--)
	{
		cin>>a>>b;
		pierwsza_obnizka=100-((a*100)/100);
		druga_obnizka=(100-((a*100)/100))-(b*(100-((a*100)/100))/100);
		ile=100-druga_obnizka;
		cout<<fixed<<setprecision(2)<<ile<<endl;

	}

	return 0;
}
