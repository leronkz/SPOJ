#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wyraz;
        cin>>wyraz;
        int dlugosc = wyraz.length();
        int licznik=0;
        for(int i=0; i<dlugosc; i++)
        {
            if(wyraz[i]==wyraz[i+1])
            {
                licznik+=1;
                continue;
            }
            else if(wyraz[i]!=wyraz[i+1])
            {
                licznik+=1;
                if(licznik<=2)
                {
                    if(licznik<2)
                    {
                        cout<<wyraz[i];
                    }
                    else if(licznik==2)
                    {
                        cout<<wyraz[i-1]<<wyraz[i];
                    }
                }
                else if(licznik>=3)
                {
                    cout<<wyraz[i]<<licznik;
                }
                licznik=0;
            }
        }
        cout<<endl;
    }
    return 0;
}
