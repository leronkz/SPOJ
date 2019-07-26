#include <iostream>

using namespace std;

int silnia(int n)
{
    int suma = 0;
    do
    {
        n/=5;
        suma+=n;
    }
    while(n>0);

    return suma;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<silnia(n)<<endl;
    }

    return 0;
}
