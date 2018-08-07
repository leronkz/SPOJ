#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int ile=0;
    string linia;
    getline(cin,linia);
    char literka[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    float wystepowanie[26];
    for(int j=0; j<26; j++)
    {
        wystepowanie[j]=0;
    }
    for(int i=0; i<linia.size(); i++)
    {
        if(!isspace(linia[i]) && linia[i]!=0)
        {
            for(int j=0; j<26; j++)
            {
                if(linia[i]==literka[j])
                {
                    wystepowanie[j]+=1;
                    linia[i]=0;
                }
                else
                {
                    continue;
                }
            }
        }
        else if(isspace(linia[i]))
        {
            ile+=1;
            continue;
        }
    }
    for(int i=0; i<26; i++)
    {
        cout<<literka[i];
        for(int k=0; k<round((wystepowanie[i]*100)/(linia.size()-ile)); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
