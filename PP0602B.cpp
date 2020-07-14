#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int tab[a][b];
        for(int i=0; i<a; i++)
            for(int j=0; j<b; j++)
                cin>>tab[i][j];
        int tab2[a][b];
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
                tab2[i][j] = 0;
        }
        for(int i=1; i<a-1; i++)
        {
            for(int j=1; j<b-1; j++)
            {
                tab2[i][j] = tab[i][j];
            }
        }
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                if(tab2[i][j]==0)
                {
                    if(i==0 && j-1!=b)
                    {
                        tab2[i][j] = tab[i][j+1];
                    }
                    if(j+1==b)
                    {
                        tab2[i][j] = tab[i+1][j];
                    }
                    if(i==a-1 && j!=0)
                    {
                        tab2[i][j] = tab[i][j-1];
                    }
                    if(j==0 && i!=0)
                    {
                        tab2[i][j] = tab[i-1][j];
                    }
                }

            }
        }

        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                cout<<tab2[i][j]<<" ";
            }
            cout<<endl;
        }

    }


    return 0;
}
