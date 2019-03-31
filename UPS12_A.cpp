#include <iostream>

using namespace std;

char znaki[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int liczba[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int main()
{
    string wyraz;
    cin>>wyraz;
    for(int i=0; i<wyraz.size(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(wyraz[i]==znaki[j])
                liczba[j]+=1;
        }
    }
    bool pangram = true;
    for(int i=0; i<26; i++)
    {
        if(liczba[i]==0)
        {
            pangram=false;
            break;
        }
    }
    if(pangram)
    {
        bool t = true;
        int i=0;
        while(i+1<26)
        {
            if(liczba[i]==liczba[i+1])
            {
                t=true;
            }
            else
            {
                t = false;
                break;
            }
            i++;
        }
        if(t)
            cout<<"PANGRAM PERFEKCYJNY"<<endl;
        else
            cout<<"PANGRAM"<<endl;
    }
    else
        cout<<"NIE"<<endl;
    return 0;
}
