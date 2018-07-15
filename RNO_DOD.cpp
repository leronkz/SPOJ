    #include <iostream>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n;
    		cin>>n;
    		int liczby[n];
    		int suma=0;
    		for(int i=0; i<n; i++)
    		{
    			cin>>liczby[n];
    			suma+=liczby[n];
    		}
    		cout<<suma<<endl;
     
    	}
    	return 0;
    }
