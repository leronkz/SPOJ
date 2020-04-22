#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        string l;
        cin>>l;
        int x = 0;
        for(int i=0; i<l.size(); i++)
        {
            x*=2;
            x+=int(l[i])-48;
            x%=10;
        }
        if(!x) cout<<"Tak"<<endl;
        else cout<<"Nie"<<endl;
    }
    return 0;
}
