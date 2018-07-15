#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double PI =3.141592654;
    double r,d,S;
    cin>>r>>d;
    S=((r*r)-((d*d)/4))*PI;
    cout<<fixed<<setprecision(2)<<S<<endl;
    return 0;
}
