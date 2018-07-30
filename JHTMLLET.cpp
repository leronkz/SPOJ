#include <iostream>
using namespace std;

int main()
{
    string linia;
    while(getline(cin,linia))
    {
        for(int i=0; i<linia.size(); i++)
        {
            if(linia[i]=='<')
            {
               while(linia[i]!='>')
               {
                   i++;
                   linia[i]=toupper(linia[i]);
               }
            }
        }
       cout<<linia<<endl;
    }
    return 0;
}
