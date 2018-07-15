#include <iostream>

using namespace std;

int main()
{
    int D;
    cin>>D;
    while(D--)
    {
        int n;
        int ile=0;
        cin>>n;
        int wyniki[n];
        for(int i=0; i<n; i++)
        {
            cin>>wyniki[i];
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(wyniki[j]>wyniki[j+1])
                {
                    swap(wyniki[j],wyniki[j+1]);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(wyniki[n-1]==wyniki[i])
            {
                cout<<wyniki[i]<<" ";
                ile++;
            }
        }
        for(int i=0; i<n-ile; i++)
        {
            cout<<wyniki[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
