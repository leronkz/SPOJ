#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		int x;
		if (a.length() > b.length())
			x = b.length();
		else
			x = a.length();
		for (int i = 0; i < x; i++)
		{
			cout << a[i];
			cout << b[i];
		}
		cout << endl;
	}
	return 0;
}
