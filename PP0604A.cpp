#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int tab[n];
        double suma=0;
        double srednia;
        for(int i=0; i<n; i++)
        {
            cin>>tab[i];
            suma+=tab[i];
        }
        srednia=suma/n;
        int najblizej=tab[0];
        for(int i=0; i<n; i++)
        {
            if(fabs(srednia-tab[i])<fabs(srednia-najblizej))
            {
                najblizej=tab[i];
            }
            else if(fabs(srednia-tab[i])>fabs(srednia-najblizej))
            {
                najblizej=najblizej;
            }
            else if(fabs(srednia-tab[i])==fabs(srednia-najblizej));
            {
                najblizej=najblizej;
            }
        }
        cout<<najblizej<<endl;
    }
    return 0;
}
