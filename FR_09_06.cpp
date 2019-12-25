#include <iostream>

using namespace std;

char znaki[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int licznik[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void r()
{
    for(int i=0; i<26; i++)
    {
        licznik[i] = 0;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        r();
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<26; j++)
            {
                if(s[i]==znaki[j])
                    licznik[j]=1;
            }
        }
        int p=0,k=0;
        for(int i=0; i<26; i++)
        {
            if(licznik[i]==1)
            {
                p = i;
                break;
            }
        }
        for(int i=25; i>=0; i--)
        {
            if(licznik[i]==1)
            {
                k = i;
                break;
            }
        }
        cout<<k-p<<endl;
    }

    return 0;
}
