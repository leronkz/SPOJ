#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    long long liczba=0;
    long long suma=0;
    long long sum;
    while(scanf("%lld",&liczba)!=EOF)
    {
       sum=0;
       sum=sum+liczba;
       while(liczba!=0)
       {
           cin>>liczba;
           sum=sum+liczba;
       }
       cout<<sum<<endl;
       suma=suma+sum;
    }
    cout<<suma<<endl;
    return 0;
}
