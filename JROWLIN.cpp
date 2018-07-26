#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c,x;
    cin>>a>>b>>c;
    if(a!=0)
    {
        x = (c-b)/a;
        cout<<fixed<<setprecision(2)<<x<<endl;
    }
    else if(a==0 && b==c)
    {
        cout<<"NWR"<<endl;
    }
    else if(a==0 && b!=c)
    {
        cout<<"BR"<<endl;
    }
    return 0;
}
