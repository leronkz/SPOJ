#include <iostream>

using namespace std;

int main()
{
    int poszukiwana;
    int n;
    int ile=0;
    while(cin>>poszukiwana>>n)
    {
        ile=0;
    int tab[n];
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    for(int i=0; i<n; i++)
    {
        if(tab[i]==poszukiwana)
        {
            ile+=1;
        }
    }
    cout<<ile<<endl;
    }
    return 0;
}
