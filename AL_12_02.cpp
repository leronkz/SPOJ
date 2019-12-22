#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        int r;
        cin>>r;
        long long odp;
        odp = 1+4*r;
        int i=1;
        long long k=0;
        while(i<=r)
        {
            k+=int(sqrt(r*r-i*i));
            i++;
        }
        odp=1+4*r+4*k;
        cout<<odp<<endl;
   }
    return 0;
}
