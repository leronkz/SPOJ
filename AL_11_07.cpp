#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    string linia;
    while(getline(cin,linia))
    {
        for(int i=0; i<linia.size()-1; i+=2)
        {
            char temp = linia[i];
            linia[i] = linia[i+1];
            linia[i+1] = temp;
        }
        cout<<linia<<endl;
    }
    return 0;
}
