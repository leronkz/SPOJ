#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string anagram;
    int t;
    cin>>anagram>>t;
    int ile = 0;
    while(t--)
    {

        string x;
        cin>>x;
        sort(anagram.begin(),anagram.end());
        sort(x.begin(),x.end());
        if(x.size()==anagram.size())
        {
            bool t = true;
            for(int i=0; i<anagram.size(); i++)
            {
                if(anagram[i]!=x[i])
                {
                    t = false;
                    break;
                }
            }
            if(t)
                ile++;
        }
    }
    cout<<ile<<endl;

    return 0;
}
