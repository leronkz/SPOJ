#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double Pole(int a,int b,int c);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double k,wynik=0;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            wynik+=((Pole(a,b,c))/10)*k;
        }
        wynik = round(wynik);
        cout<<setprecision(1000)<<wynik<<endl;
    }

    return 0;
}
double Pole(int a,int b,int c)
{
    if((a<(b+c)) && (b<(a+c)) && (c<(a+b)))
    {
        double p = double(a+b+c)/2;
        double pole = sqrt(double((p*(p-a)*(p-b)*(p-c))));
        return pole;
    }
    else
        return 0;
}
