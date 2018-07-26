#include <iostream>

using namespace std;

int main()
{
    string napis;
    while(getline(cin,napis))
    {
        for(int i=0; i<napis.size(); i++)
        {
            if(isspace(napis[i])==false)
            {
                if(napis[i]==90)
                {
                    napis[i]=67;
                    continue;
                }
                else if(napis[i]==89)
                {
                    napis[i]=66;
                    continue;
                }
                else if(napis[i]==88)
                {
                    napis[i]=65;
                    continue;
                }
                napis[i]=napis[i]+3;
            }
        }
        for(int i=0; i<napis.size(); i++)
        {
            cout<<napis[i];
        }
        cout<<endl;
    }

    return 0;
}
