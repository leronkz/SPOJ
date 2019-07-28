#include <iostream>

using namespace std;

int main()
{
    double n;
    while(cin>>n)
    {
        while(n>9)
            n/=18;
        cout<<(n<=1 ? "B" : "A")<<endl;
    }
    return 0;
}
