#include <iostream>

using namespace std;

double zamien(double liczba,int podstawa)
{
    int pozycja = 0;
    if(liczba==0)
        return 1;
    else
    {
        while(int(liczba)!=0)
        {
            liczba = int(liczba/podstawa);
            pozycja++;
        }
        return pozycja;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double liczba;
        int podstawa;
        cin>>liczba>>podstawa;
        cout<<zamien(liczba,podstawa)<<endl;
    }

    return 0;
}
