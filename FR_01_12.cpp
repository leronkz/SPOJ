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
        int tab[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>tab[i];
        }
        if(n<3)
            cout<<0<<endl;
        else
        {
            int maks_odp=0;
            int odp = 0;
            int i=2;
            while(i+1<=n)
            {
                if((tab[i]>tab[i+1] && tab[i]>tab[i-1]) || (tab[i]<tab[i+1] && tab[i]<tab[i-1]))
                {
                    if(odp==0)
                    {
                        odp=3;
                    }
                    else
                    {
                        odp+=1;
                    }
                }
                else
                {
                    odp = 0;
                }
                if(maks_odp<odp)
                {
                    maks_odp = odp;
                }
                i++;
            }
            cout<<maks_odp<<endl;
        }
    }
    return 0;
}
