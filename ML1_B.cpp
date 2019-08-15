#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<string>tab;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;
        tab.push_back(s);
    }
    int max=0;
    int petla=0;
    for(int i=0; i<tab.size(); i++)
    {
        if(tab[i]=="for")
            petla++;
        else if(tab[i]=="end")
        {
            if(max<petla)
                max=petla;
            petla--;
        }
    }
    if(max == 0) cout<<"O(1)"<<endl;
    else if(max == 1) cout<<"O(n)"<<endl;
    else cout<<"O(n^"<<max<<")"<<endl;
    return 0;
}
