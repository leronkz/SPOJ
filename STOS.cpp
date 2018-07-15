    #include <iostream>
    using namespace std;
     
    int main() {
     
    	char znak;
    	int rozmiar=0;
    	int stos[11];
    	while(cin>>znak)
    	{
    		if(znak=='+')
    		{
    			if(rozmiar==10)
    			{
    				cout<<":("<<endl;
    			}
    			else
    			{
    				rozmiar+=1;
    				cin>>stos[rozmiar];
    				cout<<":)"<<endl;
    			}
    		}
    		else if(znak=='-')
    		{
    			if(rozmiar==0)
    			{
    				cout<<":("<<endl;
    			}
    			else
    			{
    				cout<<stos[rozmiar]<<endl;
    				rozmiar-=1;
    			}
    		}
    	}
    	return 0;
    }
