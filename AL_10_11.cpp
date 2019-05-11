#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double h1,m1,s1,h2,m2,s2;
    long double dl;
    char a,b,c,d;
    while(cin>>h1>>a>>m1>>b>>s1>>h2>>c>>m2>>d>>s2>>dl)
    {
        long double czas1,czas2;
        czas1 = (h1*3600)+(m1*60)+s1;
        czas2 = (h2*3600)+(m2*60)+s2;
        long double p = dl/(czas2-czas1);
        long double predkosc = p*3.6;
        long double pr = (dl/1852)/((czas2-czas1)/3600);
        cout<<fixed<<setprecision(1)<<predkosc<<" "<<fixed<<setprecision(1)<<pr<<endl;

    }
    return 0;
}
