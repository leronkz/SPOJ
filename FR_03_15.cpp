#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       double a,b;
       cin>>a>>b;
       double c = (a+b)/2;
       double x = (max(a,b)-min(b,a))/2;
       double h = sqrt(c*c-x*x);
       cout<<fixed<<setprecision(2)<<c*h<<endl;
    }

    return 0;
}
