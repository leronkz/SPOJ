#include <iostream>
#include <vector>
#define PB push_back
using namespace std;

vector<unsigned long long>s;
vector<unsigned long long>k;

void pre_process()
{
    s.PB(1);
    s.PB(2);
    for(int i=2; i<=63; i++)
    {
        unsigned long long x;
        x = s[i-1]*2;
        s.PB(x);
    }
}

int main()
{
    pre_process();
    int t,p;
    cin>>t;
    while(t--)
    {
        unsigned long long x;
        cin>>x;
        k.PB(x);
    }
    cin>>p;
    while(p--)
    {
        int odp = 0;
        int x;
        cin>>x;
        if(x<=64)
        {
            unsigned long long a,b;
            a = s[x-1];
            b = 2*a-1;
            for(int i=0; i<k.size(); i++)
            {
                if(k[i]>=a && k[i]<=b)
                    odp++;
            }
            cout<<odp<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
