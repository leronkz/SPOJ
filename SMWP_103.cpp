#include <iostream>
#include <cmath>

using namespace std;

bool czy_jest(double n)
{
    if(n==0) return false;
    double x  = sqrt(n);
    if(x - int(x)==0) return true;
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
        cout<<(czy_jest(n) ? "TAK":"NIE")<<endl;
    }
    return 0;
}
