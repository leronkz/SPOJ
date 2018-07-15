#include <iostream>
using namespace std;

int main() {
				int t;
				cin>>t;
				while(t--)
				{
					int a,b;
					cin>>a>>b;
					while(a!=b)
					{
						if(a>b)
						{
							a-=b;
						}
						else
						{
							b-=a;
						}
					}
					cout<<2*a<<endl;
				}
	return 0;
}
