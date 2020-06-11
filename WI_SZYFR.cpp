#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rozbij(int kod,vector<int>&k)
{
   while(kod>0)
   {
       k.push_back(kod%10);
       kod/=10;
   }
   reverse(k.begin(),k.end());
}
void szyfruj(string&napis,vector<int>&k)
{
    for(int i=0; i<napis.size(); i++)
    {
       napis[i]+=k[(i%k.size())];
       if(int(napis[i])>90)
       {
           int p = int(napis[i])-90;
           napis[i] = char(65+p-1);
       }
    }
    cout<<napis<<endl;
}
void deszyfruj(string&napis,vector<int>&k)
{
    for(int i=0; i<napis.size(); i++)
    {
        napis[i]-=k[(i%k.size())];
        if(int(napis[i]<65))
        {
            int p = 65 - int(napis[i]);
            napis[i] = char(90-p+1);
        }
    }
    cout<<napis<<endl;
}
int main()
{
    string operacja;
    int kod;
    string napis;
    vector<int>k;
    cin>>operacja;
    cin>>kod;
    cin>>napis;
    rozbij(kod,k);
    if(operacja=="SZYFRUJ")
        szyfruj(napis,k);
    else if(operacja=="DESZYFRUJ")
        deszyfruj(napis,k);
    return 0;
}
