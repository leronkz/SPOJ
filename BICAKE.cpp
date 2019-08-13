#include <iostream>

using namespace std;

int main()
{
	long long n;
	while (cin >> n)
	{
		int i = 1;
		long long k = 1;
		while (k < n)
		{
			k += i;
			i++;
		}
		cout << i-1 << endl;
	}
	return 0;
}
