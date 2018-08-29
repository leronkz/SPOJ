#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string p,s;
        cin>>n;
        cin>>p;
        cin>>s;
        for(int i = 0; i<s.size(); i++)
        {
            if(p == s.substr(i,n))
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
