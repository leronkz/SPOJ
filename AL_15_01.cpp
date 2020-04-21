#include <iostream>

using namespace std;

int main()
{
    string d,j,m;
    cin>>d>>j>>m;
    int maks = 0;
    for(int i=0; i<d.size(); i++)
    {
        if(j[i]!=d[i] && j[i]==m[i])
            maks+=2;
        else if(j[i]!=d[i] && j[i]!=m[i])
            maks++;
        else if(j[i]==d[i] && m[i]!=d[i])
            maks++;
    }
    cout<<maks<<endl;
    return 0;
}
