#include <iostream>

using namespace std;

int main()
{
   int d;
   cin>>d;
   while(d--)
   {
       int l,c;
       cin>>l>>c;
       l=l-1; //bo jasio tez sie liczy
       if(l==0)
       {
           cout<<"TAK"<<endl;
       }
       else if(c<l)
       {
           cout<<"TAK"<<endl;
       }
       else if(l==c)
       {
           cout<<"NIE"<<endl;
       }
       else if(c>l)
       {
           if(c%l==0)
           {
               cout<<"NIE"<<endl;
           }
           else
           {
               cout<<"TAK"<<endl;
           }
       }
   }
    return 0;
}
