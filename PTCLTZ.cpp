#include <iostream>

using namespace std;

int main()
{
    int t;
    int s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=0;
        while(s!=1)
        {
            if(s%2!=0)
            {
                s=3*s+1;
            }
            else
            {
                s=s/2;
            }
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
