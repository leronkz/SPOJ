#include <iostream>
using namespace std;

bool mala_czy_duza(char znak)
{
    if(znak>=97 && znak<=122)
        return true;
    else
        return false;
}
int main()
{
    string linia;
    int t;
    char male[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char duze[26]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int male_l[26]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int duze_l[26]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cin>>t;
    for(int i=0; i<=t; i++)
    {
        getline(cin,linia);
        for(int i=0; i<linia.size(); i++)
        {
            if(!isspace(linia[i]))
            {
                for(int j=0; j<26; j++)
                {
                    if(mala_czy_duza(linia[i]))
                    {
                        if(linia[i]==male[j])
                        {
                            male_l[j]+=1;
                            break;
                        }
                    }
                    else
                    {
                        if(linia[i]==duze[j])
                        {
                            duze_l[j]+=1;
                            break;
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<26; i++)
    {
        if(male_l[i]!=0)
        {
            cout<<male[i]<<" "<<male_l[i]<<endl;
        }
    }
    for(int i=0; i<26; i++)
    {
        if(duze_l[i]!=0)
        {
            cout<<duze[i]<<" "<<duze_l[i]<<endl;
        }
    }
    return 0;

}
