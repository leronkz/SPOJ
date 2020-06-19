#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int wynik = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='-')
            {
                wynik-=int(s[i+1])-48;
                i++;
            }
            else
            {
                if(s[i]=='+')
                {
                    wynik+=int(s[i+1])-48;
                    i++;
                }
                else if(s[i]!='+')
                {
                    wynik+=int(s[i])-48;
                }
            }
        }
        cout<<wynik<<endl;
    }
    return 0;

}
