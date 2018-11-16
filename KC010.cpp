#include <iostream>

using namespace std;

int ile_liczb=0;
int ile_slow=0;

void oblicz(string linia)
{
    for(int i=0; i<linia.size(); i++)
    {
        if(linia[i]>=48 && linia[i]<=57)
        {
            while(linia[i]>=48 && linia[i]<=57)
            {
                i++;
            }
            ile_liczb++;
        }
        else if((linia[i]>=65 && linia[i]<=90) || (linia[i]>=97 && linia[i]<=122))
        {
            while((linia[i]>=65 && linia[i]<=90) || (linia[i]>=97 && linia[i]<=122))
            {
                i++;
            }
            ile_slow++;
        }
    }

}

int main()
{
    string linia;
    while(getline(cin,linia))
    {
        oblicz(linia);
        cout<<ile_liczb<<" "<<ile_slow<<endl;
        ile_liczb = 0;
        ile_slow = 0;
    }
    return 0;
}
