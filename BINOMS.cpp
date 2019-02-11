#include <iostream>

using namespace std;

unsigned long long int Newton(unsigned int n,unsigned int k)
{
    if(k==0)
        return 1;
    else if(k<0)
        return 0;
    else if(n<(k<<1))
        return Newton(n,n-k);
    unsigned long long int wynik = n;
    for(int i=2; i<=k; i++)
    {
        wynik*= --n;
        wynik/=i;
    }
    return wynik;
}

int main()
{
    unsigned int a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<Newton(a,b)<<endl;
    }

    return 0;
}
