#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wyraz;
        cin>>wyraz;
        int dlugosc = wyraz.length();
        for(int i=0; i<dlugosc/2; i++)
        {
            cout<<wyraz[i];
        }
        cout<<endl;
    }

    return 0;
}
