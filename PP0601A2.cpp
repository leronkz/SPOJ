#include <iostream>
using namespace std;

int main() {
	
	int x=0;
	int y=0;
	int ile=0;
	while(cin>>x)
	{
		if(ile==3)
		{
			return 0;
		}
		else
		{
			if(x==42 && y!=x && y!=0)
			{
				ile+=1;
				y=x;
			}
			else
			{
				y=x;
			}
		}
		cout<<x<<endl;
	}

	return 0;
}
