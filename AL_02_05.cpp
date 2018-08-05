#include <iostream>

using namespace std;

void quick_sort(int *tab,int p,int q)
{
    int srodek = tab[(p+q)/2];
    int i=p;
    int j=q;
    do
    {
        while(srodek>tab[i]) i++;
        while(srodek<tab[j]) j--;
        if(i<=j)
        {
            int bufor = tab[i];
            tab[i]=tab[j];
            tab[j]=bufor;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(j>p) quick_sort(tab,p,j);
    if(i<q) quick_sort(tab,i,q);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int *tablica = new int [n];
        int ile_pudelek=0;
        for(int i=0; i<n; i++)
        {
            cin>>tablica[i];
        }
        quick_sort(tablica,0,n-1);
        int i,j;
        i=0;
        j=n-1;
        do
        {
           if(tablica[i]+tablica[j]<=k)
           {
               ile_pudelek+=1;
               i+=1;
               j-=1;
           }
           else
           {
               ile_pudelek+=1;
               j-=1;
           }
        }while(i<=j);
        cout<<ile_pudelek<<endl;
    }
    return 0;
}
