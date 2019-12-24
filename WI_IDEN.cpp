#include <iostream>
#include <string>
using namespace std;

bool sprawdz_dlugosc(int dl,int n)
{
    if(dl<=n)
        return true;
    else
        return false;
}


int main()
{
    int n;
    string id;
   
    cin>>n;
    cin>>id;
    int dl = id.length();
  
    if(sprawdz_dlugosc(dl,n))
        cout<<id<<endl;
    else
    {
        for(int i = dl-1; i>=0; i--)
        {
            if((90<id[i] || id[i]<65) && (122<id[i] || id[i]<97) && (57<id[i] || id[i]<48) && id[i]!=36)
            {
                id.erase(i,1);
                if(--dl==n)
                {
                    break;
                }
            }
        }
        if(sprawdz_dlugosc(dl,n))
            cout<<id<<endl;
        else
        {
            for(int i=dl-1; i>=0; i--)
            {
                if(48<=id[i] && id[i]<=57)
                {
                    id.erase(i,1);
                    if(--dl==n)
                        break;
                }
            }

            if(sprawdz_dlugosc(dl,n))
                cout<<id<<endl;
            else
            {
                int x = 0;
                for(int i=0; i<dl; i++)
                {
                    if(id[i]==65 || id[i]==69 || id[i]==73 || id[i]==79 || id[i]==85 || id[i]==89 || id[i]==97 || id[i]==101 || id[i]==105 || id[i]==111 || id[i]==117 || id[i]==121)
                    {
                        if(x==1)
                        {
                            id.erase(i,1);
                            if(--dl==n)
                                break;
                            i--;
                        }
                        x=1;
                    }
                }
                if(sprawdz_dlugosc(dl,n))
                    cout<<id<<endl;
                else
                {

                    for(int i=dl-2; i>=0; i--)
                    {
                        id.erase(i,1);
                        if(--dl==n)
                            break;
                    }
                    cout<<id<<endl;
                }
            }
        }
    }


    return 0;
}
