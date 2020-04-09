#include <iostream>

using namespace std;

void zamien_na_liczbe(string dzien,int &k)
{
    if(dzien=="Pn")
        k=1;
    if(dzien=="Wt")
        k=2;
    if(dzien=="Sr")
        k=3;
    if(dzien=="Cz")
        k=4;
    if(dzien=="Pt")
        k=5;
    if(dzien=="So")
        k=6;
    if(dzien=="Nd")
        k=7;
}
void zamien_na_dzien(string&dzien,int k)
{
    if(k==1)
        dzien="Pn";
    if(k==2)
        dzien="Wt";
    if(k==3)
        dzien="Sr";
    if(k==4)
        dzien="Cz";
    if(k==5)
        dzien="Pt";
    if(k==6)
        dzien="So";
    if(k==7)
        dzien="Nd";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string dzien;
        int d;
        cin>>dzien>>d;
        int k = 0;
        zamien_na_liczbe(dzien,k);
        int p = d/7;
        int ile = d - p*7;
        for(int i=1; i<=ile; i++)
        {
            k+=1;
            if(k>7)
                k = 1;
        }
        string odp;
        zamien_na_dzien(odp,k);
        cout<<odp<<endl;
    }


}
