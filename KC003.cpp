#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>0 && b>0 && c>0)
        {
        if(a+b>c && a+c>b && b+c>a)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
