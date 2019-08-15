#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        vector<int>tab;
        for(int i=0; i<6; i++)
        {
            cin>>x;
            tab.push_back(x);
        }
        int wygrane = tab[0]+tab[2]+tab[4];
        int przegrane = tab[1]+tab[3]+tab[5];
        int mecze = (tab[0]+tab[1])*4;

        int jas_w = (mecze/2)-wygrane;
        int jas_p = (mecze/2)-przegrane;

        cout<<jas_w<<" "<<jas_p<<endl;
    }
    return 0;
}
