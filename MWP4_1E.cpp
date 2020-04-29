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
        int sum_pref = 0;
        int sum_suf = 0;
        int i;
        for(i=0; i<n; i++)
        {
            cin>>tab[i];
            sum_suf+=tab[i];
        }
        for(i=0; i<n-1; i++)
        {
            sum_pref+=tab[i];
            sum_suf-=tab[i];
            if(sum_pref==sum_suf)
                break;
        }
        if(i<n-1) cout<<i+1<<endl;
        else cout<<"0"<<endl;
    }

    return 0;
}
