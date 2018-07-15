#include <iostream>
using namespace std;

void funkcja()
{
    if(cin.peek()=='\n')
        return;
    int liczba;
    cin>>liczba;
    funkcja();
    cout<<liczba<<" ";
}

int main()
{
   funkcja();
    return 0;
}
