#include <iostream>

using namespace std;

void dec_to_hex(int liczba)
{
    int pozycja=0;
    int ODP[100];
    char CYFRA[]= {"0123456789ABCDEF"};
    if(liczba==0)
    {
        cout<<"0";
    }
    else
    {
        while(liczba!=0)
        {
            ODP[pozycja]=liczba%16;
            liczba=liczba/16;
            pozycja++;
        }
        for(int i=pozycja; i>0; i--)
        {
            cout<<CYFRA[ODP[i-1]];
        }
    }
}
void dec_to_jedenastkowy(int liczba)
{
    int pozycja=0;
    int ODP[100];
    char CYFRA[]= {"0123456789A"};
    if(liczba==0)
    {
        cout<<"0";
    }
    else
    {
        while(liczba!=0)
        {
            ODP[pozycja]=liczba%11;
            liczba=liczba/11;
            pozycja++;
        }
        for(int i=pozycja; i>0; i--)
        {
            cout<<CYFRA[ODP[i-1]];
        }
    }
}
int main()
{
    int t;
    cin>>t;
    int liczba;
    while(t--)
    {
    cin>>liczba;
    dec_to_hex(liczba);
    cout<<" ";
    dec_to_jedenastkowy(liczba);
    cout<<endl;
    }
    return 0;
}
