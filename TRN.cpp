#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int tablica[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>tablica[i][j];
        }
    }
    int tablica2 [n][m];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            tablica2[j][i]=tablica[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<tablica2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
