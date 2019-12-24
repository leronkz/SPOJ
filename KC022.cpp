#include <iostream>
#include <list>
using namespace std;

int main() {

	int k,liczba;
	while(cin>>k)
	{
		list<int> lista;
		while(true)
		{
			if(cin.peek()=='\n') break;
			else
			{
				cin>>liczba;
				lista.push_back(liczba);
			}
		}
        lista.sort();
        lista.unique();
		list<int>::iterator it = lista.end();
		if(k>lista.size()) cout<<"-"<<endl;
		else
		{
			for(int j=0; j<k; j++)
			{
				it--;
			}
			cout<<*it<<endl;
		}
	}


	return 0;
}
