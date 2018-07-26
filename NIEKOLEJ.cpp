#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=2)
    {
        if(n==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    }
    else if(n%2!=0 && n>2)
    {
        cout<<n-n/2<<" ";
        for(int i=0; i<n/2; i++)
        {
            cout<<i<<" "<<n-i<<" ";
        }
        cout<<(n-n/2) - 1<<endl;
    }
    else
    {
        cout<<n-n/2<<" ";
        for(int i=0; i<n/2; i++)
        {
            cout<<i<<" "<<n-i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
