#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int Ai,Pi,Bj,Pj;
        cin>>Ai>>Pi>>Bj>>Pj;
        if(Ai>Bj)
        {
            if(((int)abs(Pj-Pi)+1)%3==2)
            {
               cout<<"0"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
        else if(Ai<Bj)
        {
            if(((int)abs(Pj-Pi)+1)%3==2)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}
