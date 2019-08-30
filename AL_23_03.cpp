#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int n;
        vector<int>wynik;
        cin>>n;
        if(n<=2)
            cout<<n<<" = BRAK"<<endl;
        else if(n%2!=0)
        {
            cout<<n<<" = "<<n/2<<" + "<<n/2+1<<endl;
        }
        else
        {
            int i = 2;
            int j = 1;
            int suma=j;
            while(n!=pow(2,i))
            {
                if((n-suma)%i == 0)
                {
                    int x = (n-suma)/i;
                    x-=1;
                    for(int k=1; k<=i; k++)
                    {
                        wynik.push_back(x+k);
                    }
                    break;
                }
                else
                {
                    i++;
                    j++;
                    suma+=j;
                }
            }
            if(wynik.size()!=0)
            {
                cout<<n<<" = "<<wynik[0];
                for(int i = 1; i<wynik.size(); i++)
                    cout<<" + "<<wynik[i];
                cout<<endl;
            }
            else
                cout<<n<<" = BRAK"<<endl;
        }
    }
    return 0;
}
