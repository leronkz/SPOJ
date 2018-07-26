#include <iostream>
using namespace std;


int main()
{
   int a,b;
   int t;
   cin>>t;
   while(t--)
   {
       cin>>a>>b;
       int predkosc=(2*a*b)/(a+b);
       cout<<predkosc<<endl;
   }
    return 0;
}
