#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0)
    {
        cout<<"f(x)=0"<<endl;
    }
    if(a==0 && b!=0)
    {
        cout<<"f(x)="<<b<<endl;
    }
    if(a>1 && b!=0)
    {
        if(b<0)
            cout<<"f(x)="<<a<<"x"<<b<<endl;
        else
            cout<<"f(x)="<<a<<"x+"<<b<<endl;
    }
    if(a==1 && b!=0)
    {
        if(b<0)
            cout<<"f(x)=x"<<b<<endl;
        else
            cout<<"f(x)=x+"<<b<<endl;
    }
    if(a==-1 && b!=0)
    {
        if(b<0)
            cout<<"f(x)=-x"<<b<<endl;
        else
            cout<<"f(x)=-x+"<<b<<endl;
    }
    if(a>1 && b==0)
    {
        cout<<"f(x)="<<a<<"x"<<endl;
    }
    if(a==1 && b==0)
        cout<<"f(x)=x"<<endl;
    if(a==-1 && b==0)
        cout<<"f(x)=-x"<<endl;
    if(a<-1 && b==0)
        cout<<"f(x)="<<a<<"x"<<endl;
    if(a<-1 && b!=0)
    {
        if(b<0)
            cout<<"f(x)="<<a<<"x"<<b<<endl;
        else
            cout<<"f(x)="<<a<<"x+"<<b<<endl;
    }
    return 0;
}
