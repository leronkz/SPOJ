#include <iostream>
#include <cstdio>
using namespace std;

void solve()
{
    char znak;
    int ile = 0;
    while((znak=cin.get())!=EOF)
    {
        if(znak=='\n')
            ile++;
    }
    cout<<ile+1<<endl;
}
int main()
{
    solve();
    return 0;
}
