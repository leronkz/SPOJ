#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       vector<int>s;
       int i=0;
       if(a%2==0) i = a+2;
       else i = a+1;
       while(i<b)
       {
           s.push_back(i);
           i+=2;
       }
       if(s.size()==0) cout<<"BRAK"<<endl;
       else
       {
           for(int i=0; i<s.size(); i++)
           {
               cout<<s[i]<<" ";
           }
           cout<<endl;
       }
    }

    return 0;
}
