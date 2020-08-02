#include <iostream>

using namespace std;

void ujemne(string napis,int n,int n_z)
{
    int dl = napis.length();
    if(n!=-1)
    {
        int k = 1;
        while(k<=dl-1)
        {
            cout<<napis[dl-k];
            for(int i=1; i<=n_z-1; i++)
            {
                cout<<" ";
            }
            k++;
        }
        cout<<napis[dl-(k++)];

    }
    else if(n==-1)
    {
        for(int i=dl-1; i>=0; i--)
        {
            cout<<napis[i];
        }

    }
}
void dodatnie(string napis,int n,int n_z)
{
    int dl = napis.length();
    if(n!=1)
    {
        int k=0;
        while(k<=dl-2)
        {
            cout<<napis[k];
            for(int i=1; i<=n_z-1; i++)
                cout<<" ";
            k++;
        }
        cout<<napis[k++];

    }
    else if(n==1)
    {
        cout<<napis;
    }
}
int main()
{
    string napis;
    int t;
    cin>>napis;
    cin>>t;
    while(t--)
    {
        int n,n_z;
        cin>>n;
        n_z = abs(n);
        if(n==0)
        {
            int dl = napis.length();
            cout<<napis[dl-1];
        }
        else if(n<0)
        {
        	ujemne(napis,n,n_z);
        }
        else
        {
        	dodatnie(napis,n,n_z);
        }
        if(t!=0)
        {
        	cout<<endl;
        }
    }
    return 0;
}
