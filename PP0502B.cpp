#include <iostream>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     int tab[n];
     for(int i=0; i<n; i++)
     {
         cin>>tab[i];
     }
     for(int i=n-1; i>=0; i--)
     {
         cout<<tab[i]<<" ";
     }
     cout<<endl;
 }
    return 0;
}
