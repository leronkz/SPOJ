#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int *tab=new int [n];
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    for(int i=k; i<n; i++)
    {
        cout<<tab[i]<<" ";
    }
    for(int i=0; i<k; i++)
    {
        cout<<tab[i]<<" ";
    }
    delete [] tab;
    return 0;
}
