#include <iostream>
using namespace std;
int main()
{
    string n;
    cin>>n;
    if((char(n[n.size()-1])-48)%2==0)
        cout<<"Tak"<<endl;
    else
    {
        bool t = false;
        for(int i=0; i<n.size(); i++)
        {
            if((char(n[i])-48)%2==0)
            {
                t = true;
                break;
            }
        }
        if(t) cout<<"Tak"<<endl;
        else cout<<"Nie"<<endl;
    }
    return 0;
}
