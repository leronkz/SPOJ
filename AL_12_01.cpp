#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string x;
        cin>>x;
        int i = 1;
        int p = i;
        int j = 0;
        while(i<=n && j<x.size())
        {
            if(x[j]=='U')
            {
                p++;
            }
            if(x[j]=='D')
            {
                p--;
            }
            j++;
            if(p==0 || p>n)
            {
                i++;
                j = 0;
                p = i;
            }
        }
        if(i>n) cout<<"NIE"<<endl;
        else cout<<"TAK"<<endl;
    }
    return 0;
}
