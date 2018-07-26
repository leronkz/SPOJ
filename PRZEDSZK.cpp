#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int a1,b1;
        a1=a;
        b1=b;
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
        int NWD;
        NWD = a;
        int NWW = a1*b1/NWD;
        cout<<NWW<<endl;
    }
    return 0;
}
