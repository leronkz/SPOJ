#include <iostream>

using namespace std;

int main()
{
    char pesel[11];
    int t;
    int suma=0;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<11; i++)
        {
            cin>>pesel[i];
        }
         suma=pesel[0]*1+pesel[1]*3+pesel[2]*7+pesel[3]*9+pesel[4]*1+pesel[5]*3+pesel[6]*7+pesel[7]*9+pesel[8]*1+pesel[9]*3+pesel[10]*1;
         if(suma%10==0)
         {
             cout<<"D"<<endl;
         }
         else
         {
             cout<<"N"<<endl;
         }
    }
    return 0;
}
