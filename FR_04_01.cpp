#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    string l;
    cin>>l;
    for(int i=0; i<l.size(); i+=2)
    {
        string p="";
        p+=l[i];
        p+=l[i+1];
        if(atoi(p.c_str())<13)
        {
            p+=l[i+2];
            i++;
        }
        cout<<char(atoi(p.c_str()));
        p = "";
    }
    return 0;
}
