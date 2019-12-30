#include <iostream>
#include <vector>
#include <cmath>
#define PB push_back
using namespace std;
vector<int>dvs;
vector<int>pdvs;
void divis(int n)
{
    dvs.clear();
    pdvs.clear();
    int m = n;
    dvs.PB(1);
    for(int d=2; d*d<n; d++)
    {
        if(n%d==0)
        {
            dvs.PB(d);
            if(m%d==0)
            {
                pdvs.PB(d);
                do
                    m/=d;
                while(m%d==0);
            }
        }
    }
    if(m!=1)
        pdvs.PB(m);
    int i = dvs.size()-1;
    if(dvs[i]*dvs[i]==n)
        i--;
    for(; i>=0; i--)
        dvs.PB(n/dvs[i]);
}
bool czy_kwadrat(int n)
{
    double x = sqrt(n);
    if(x - int(x)==0)
        return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        if(czy_kwadrat(n))
        {
            cout<<4*sqrt(n)<<endl;
        }
        else
        {
            divis(n);
            if(dvs.size()==2)
            {
                int obw = 2*1+2*n;
                cout<<obw<<endl;
            }
            else
            {
                int x = dvs.size();
                int obw = 2*dvs[(x/2)-1] + 2*dvs[(x/2)];
                cout<<obw<<endl;
            }
        }
    }
    return 0;
}
