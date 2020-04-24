#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<pair<string,int>>p;
        int n;
        cin>>n;
        while(n--)
        {
            int a;
            string x;
            cin>>a>>x;
            p.insert(make_pair(x,a));
        }
        for(set<pair<string,int>>::iterator i=p.begin(); i!=p.end();i++)
            cout<<(*i).second<<" ";
        cout<<endl;
    }
    return 0;
}
