#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string w = "";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C')
                w+='2';
            if(s[i]=='D' || s[i]=='E' || s[i]=='F')
                w+='3';
            if(s[i]=='G' || s[i]=='H' || s[i]=='I')
                w+='4';
            if(s[i]=='J' || s[i]=='K' || s[i]=='L')
                w+='5';
            if(s[i]=='M' || s[i]=='N' || s[i]=='O')
                w+='6';
            if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
                w+='7';
            if(s[i]=='T' || s[i]=='U' || s[i]=='V')
                w+='8';
            if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
                w+='9';
        }
        cout<<w<<endl;

    }
    return 0;

}
