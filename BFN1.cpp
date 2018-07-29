#include <iostream>

using namespace std;

int odwroc(int liczba)
{
    int k;
    for(k=0;liczba;liczba/=10) k=k*10+(liczba%10);
    return k;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int liczba;
        cin>>liczba;
        int ile=0;
        int odwrocona=odwroc(liczba);
        if(liczba==odwrocona) cout<<liczba<<" "<<ile<<endl;
        else
        {
            while(liczba!=odwrocona)
            {
                liczba=liczba+odwrocona;
                odwrocona=odwroc(liczba);
                ile++;
            }
            cout<<liczba<<" "<<ile<<endl;
        }
    }

        return 0;
}
