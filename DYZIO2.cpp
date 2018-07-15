#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ile=0;
        int i=a;
        int j=2;
        bool czy_pierwsza=false;
        if(a==2 && b==2)
        {
            cout<<"1"<<endl;
        }
        while(i<=b)
        {
            while(j<i)
            {
                if(i%j!=0)
                {
                    czy_pierwsza=true;
                }
                else if(i%j==0)
                {
                    czy_pierwsza=false;
                    break;
                }
               j++;
            }
            if(czy_pierwsza)
            {
                ile+=1;
            }
            j=2;
            i++;
        }
        cout<<ile<<endl;
    }
    return 0;
}
