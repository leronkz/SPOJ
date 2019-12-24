#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int wiek=0;
        int n;
        cin>>n;
        int tab[n];
        for(int i=0; i<n; i++)
        {
            cin>>tab[i];
            wiek+=tab[i];
        }
        cout<<wiek+n-1<<endl;
    }
    return 0;
}
