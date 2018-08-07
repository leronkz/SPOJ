#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ciag,podciag;
        int ile_znakow=0;
        cin>>ciag>>podciag;
        for(int i=0; i<podciag.size(); i++)
        {
           for(int j=0; j<ciag.size(); j++)
           {
               if(ciag[j]!=0)
               {
                   if(podciag[i]==ciag[j])
                   {
                       ile_znakow+=1;
                       for(int k=0; k<=j; k++)
                       {
                           ciag[k]=0;
                       }
                       break;
                   }
                   else
                   {
                       continue;
                   }
               }
               else
               {
                   continue;
               }
           }
        }
        if(ile_znakow==podciag.size())
        {
            cout<<"Tak"<<endl;
        }
        else
        {
            cout<<"Nie"<<endl;
        }
    }
    return 0;
}
