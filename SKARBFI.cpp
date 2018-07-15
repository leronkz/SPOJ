#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double x=0;
        double y=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a==0)
            {
                y=y+b;
            }
            else if(a==1)
            {
                y=y-b;
            }
            else if(a==2)
            {
                x=x-b;
            }
            else if(a==3)
            {
                x=x+b;
            }
        }
        if(x==0 && y==0)
        {
            cout<<"studnia"<<endl;
        }
        else if(x==0 && (y>0 || y<0))
        {
            if(y>0)
            {
                cout<<"0 "<<y<<endl;
            }
            else
            {
                cout<<"1 "<<-y<<endl;
            }
        }
        else if(y==0 &&(x>0||x<0))
        {
            if(x>0)
            {
                cout<<"3 "<<x<<endl;
            }
            else
            {
                cout<<"2 "<<-x<<endl;
            }
        }
        else if(x!=0 && y!=0)
        {
            if(x>0 && y>0)
            {
                cout<<"0 "<<y<<endl;
                cout<<"3 "<<x<<endl;
            }
            else if(x>0 && y<0)
            {
                cout<<"1 "<<-y<<endl;
                cout<<"3 "<<x<<endl;
            }
            else if(x<0 && y>0)
            {
                cout<<"0 "<<y<<endl;
                cout<<"2 "<<-x<<endl;
            }
            else if(x<0 && y<0)
            {
                cout<<"1 "<<-y<<endl;
                cout<<"2 "<<-x<<endl;
            }
        }

    }

    return 0;
}
