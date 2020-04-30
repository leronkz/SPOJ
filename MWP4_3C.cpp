#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string x;
       cin>>x;
       char s = 'A';
       int ile = 0;
       for(int i=0; i<x.size(); i++)
       {
           if(abs(int(x[i])-int(s))<=(min(int(s),int(x[i])) - max(int(s),int(x[i]))+26))
                ile+=abs(int(x[i])-int(s));
           else
                ile+=(min(int(s),int(x[i])) - max(int(s),int(x[i]))+26);
           s = x[i];
       }
       cout<<ile<<endl;
    }

    return 0;
}
