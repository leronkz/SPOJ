#include <iostream>

using namespace std;

int main()
{
    string linia;
    while(getline(cin,linia))
    {
        for(int i=0; i<=linia.size(); i++)
        {
            //if(isspace(linia[i])==false)
           // {
                if(linia[i]>=65 && linia[i]<=90)
                {
                    linia[i]=linia[i]+13;
                    if(linia[i]>90)
                    {
                        linia[i]=linia[i]-26;
                    }
                    continue;
                }
                else if(linia[i]>=97 && linia[i]<=122)
                {
                    if(linia[i]+13>122)
                    {
                        linia[i]=linia[i]-26;
                    }
                    linia[i]+=13;
                    continue;
                }
                else if(linia[i]>=48 && linia[i]<=57)
                {
                    linia[i]=linia[i]+5;
                    if(linia[i]>57)
                    {
                        linia[i]=linia[i]-10;
                    }
                    continue;
                }
            //}
        }
        cout<<linia<<endl;
    }


    return 0;
}
