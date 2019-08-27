#include <iostream>
#include <list>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=9;
        cin>>n;
        list<int>wynik;
        if(n<10)
        {
            cout<<(n?:10)<<endl;
        }
        else
        {
            while(n>1 && k>1)
            {
                while(n%k==0)
                {
                    wynik.push_front(k);
                    n/=k;
                }
                k--;
            }
            if(n>1) cout<<"NIE"<<endl;
            else for(list<int>::iterator it = wynik.begin(); it!=wynik.end(); it++){cout<<*it;}cout<<endl;
        }
    }

return 0;
}
