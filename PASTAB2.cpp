#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char znak;
    long int x;
    long int tab[n];
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    cin>>znak>>x;
    for(int i=0; i<n; i++)
    {
        if(znak=='<')
        {
            if(tab[i]<x)
            {
                cout<<tab[i]<<endl;
            }
        }
        else if(znak=='>')
        {
            if(tab[i]>x)
            {
                cout<<tab[i]<<endl;
            }
        }
    }

   return 0;
}
