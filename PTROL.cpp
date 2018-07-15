    #include <iostream>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n;
    		cin>>n;
    		int *tablica=new int [n];
    		for(int i=0; i<n; i++)
    		{
    			cin>>tablica[i];
    		}
    		for(int i=1; i<n; i++)
    		{
    			cout<<tablica[i]<<" ";
    		}
    		cout<<tablica[0]<<endl;
    	}
     
    	return 0;
    }
