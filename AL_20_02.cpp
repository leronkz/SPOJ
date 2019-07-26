#include <iostream>

using namespace std;


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int tab[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>tab[i];
        }
        if(n<=2)
        {
            cout<<n<<endl;
        }
        else
        {
            int i=3;
            int j=1;
            int k=3;
            int r = tab[2] - tab[1];
            int odp = 2;
            int max_odp = 0;
            while(i<=n)
            {
                if(tab[i]==tab[j]+(k-1)*r)
                {
                    odp+=1;
                    k++;
                }
                else
                {
                    odp = 2;
                    r = tab[i]-tab[i-1];
                    j=i-1;
                    k=3;
                }
                if(max_odp<odp)
                {
                    max_odp = odp;
                }
                i++;
            }
            cout<<max_odp<<endl;
        }

    }
    return 0;
}
