#include <iostream>

using namespace std;

void quick_sort(int *tab,int p,int q)
{
    int i = p;
    int j = q;
    int srodek = tab[(p+q)/2];
    do
    {
        while(tab[i]<srodek) i++;
        while(tab[j]>srodek) j--;
        if(i<=j)
        {
            swap(tab[i],tab[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(p<j) quick_sort(tab,p,j);
    if(q>i) quick_sort(tab,i,q);

}
bool czy_tak(int *tab1,int*tab2,int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab1[i]!=tab2[i])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int tab1[n];
    int tab2[n];
    for(int i=0; i<n; i++)
    {
        cin>>tab1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>tab2[i];
    }
    quick_sort(tab1,0,n-1);
    quick_sort(tab2,0,n-1);
    cout<<(czy_tak(tab1,tab2,n) ? "TAK":"NIE")<<endl;
    return 0;
}
