#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<int>prezenty;
vector<int>p;
int main()
{
	int a;
	while(a!=0)
    {
        cin>>a;
        prezenty.insert(a);
    }
    for(set<int>::iterator it = prezenty.begin(); it!=prezenty.end(); it++)
    {
            p.push_back(*it);
    }
    if(p.size()!=2)
        cout<<p[p.size()-2]<<endl;
    else
        cout<<p[1]<<endl;
	return 0;
}
