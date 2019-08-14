#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        char znak;
        cin>>n>>k;
        int max_dl,dl,ile_jedynek,x,y,tab[n];
        max_dl = 0;
        dl = 0;
        ile_jedynek = 0;
        x = 0;
        y = 0;
        for(int i=0; i<n; i++)
        {
            cin>>znak;
            if(znak=='0')
                dl++;
            else if(ile_jedynek<k)
            {
                ile_jedynek++;
                dl++;
                tab[y++] = i;
            }
            else
            {
                if(dl>max_dl)
                    max_dl = dl;
                dl = i - tab[x++];
                tab[y++] = i;
            }
        }
        if(dl>max_dl)
            max_dl = dl;
        cout<<max_dl<<endl;
    }
    return 0;
}
