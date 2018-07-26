#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x,y,z;
        cin>>x>>y>>z;
        double ile;
        ile=(z*y-(x+y))/(z-1)*12;
        cout<<round(ile)<<endl;
    }
    return 0;
}
