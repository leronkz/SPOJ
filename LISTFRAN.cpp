#include <iostream>

using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int v1,v2;
    int e = p;
    for(int i=0; i<n; i++)
    {
        cin>>v1>>v2;
        e^=v1;
        e^=v2;
    }
    if(e==p) cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;

    return 0;
}
