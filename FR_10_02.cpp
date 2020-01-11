#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void solve(string &s,char x)
{
    string p = "";
    p+=x;
    for(int i=0; i<s.size(); i++)
    {
       if(s[i] == x)
       {
           s.insert(i+1,p);
           i++;
       }
    }
}
int main()
{
    int k;
    cin>>k;
    vector<char>l;
    for(int i=0; i<k; i++)
    {
        char x;
        cin>>x;
        l.push_back(x);
    }
    string s;
    cin>>s;
    for(int i=0; i<l.size(); i++)
    {
        solve(s,l[i]);
    }
    cout<<s<<endl;
    return 0;
}
