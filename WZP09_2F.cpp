#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char liczba[1000];
    int suma = 0;
    while(1)
    {
        cin>>liczba;
        if(liczba[0]=='0')
            break;
        else
        {
            suma=0;
            int dl = strlen(liczba);
            for(int i=0; i<dl; i++)
            {
                suma+=(liczba[i]-48);
            }
            if((liczba[dl-1]=='0' || liczba[dl-1]=='5') && (suma%3==0))
            {
                cout<<"TAK"<<endl;
            }
            else
            {
                cout<<"NIE"<<endl;
            }
        }
    }
    return 0;
}
