#include <iostream>
#include <string>
using namespace std;

int main()
{
   char szukana;
   string napis;
   while(cin>>szukana>>napis)
   {
       while(napis.find(szukana)!=string::npos)
       {
           napis.erase(napis.find(szukana),1);
       }
       cout<<napis<<endl;
   }
    return 0;
}
