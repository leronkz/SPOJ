#include <iostream>
#include <string>
using namespace std;

int main()
{
    string linia;
    while(getline(cin,linia))
    {
        for(int i=0; i<linia.size(); i++)
        {
            if(linia[i]=='?')
            {
                if(linia[i+1]=='?')
                {
                    if(linia[i+2]=='=') linia.replace(i,3,"#");
                    else if(linia[i+2]=='/') linia.replace(i,3,"\\");
                    else if(linia[i+2]=='\'') linia.replace(i,3,"^");
                    else if(linia[i+2]=='(') linia.replace(i,3,"[");
                    else if(linia[i+2]==')') linia.replace(i,3,"]");
                    else if(linia[i+2]=='!') linia.replace(i,3,"|");
                    else if(linia[i+2]=='<') linia.replace(i,3,"{");
                    else if(linia[i+2]=='>') linia.replace(i,3,"}");
                    else if(linia[i+2]=='-') linia.replace(i,3,"~");
                }
            }
        }
        cout<<linia<<endl;
    }
    return 0;
}
