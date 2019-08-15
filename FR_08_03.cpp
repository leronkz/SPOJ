#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1.length()!=s2.length())
        {
            cout<<"error"<<endl;
        }
        else
        {
            bool t = true;
            for(int i=0; i<s1.length(); i++)
            {
                if(s1[i]!=s2[i] && s2[i]!='*')
                {
                    t = false;
                    break;
                }
            }
            if(t) cout<<"ok"<<endl;
            else cout<<"error"<<endl;
        }

    }


    return 0;
}
