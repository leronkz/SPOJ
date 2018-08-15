#include <iostream>

using namespace std;
//FUNKCJA MNOŻENIA a x b modulo n
unsigned long long MnozModulo(unsigned long long a,unsigned long long b,unsigned long long n)
{
  unsigned long long w,m;
  w = 0;
  m = 1;
  while(m) // while(m!=0)
  {
    if(b & m) w = (w+a)%n //if(b!=0 && m!=0)
    a = (a<<1)%n;
    m<<=1;
   }
   return w;
}
//FUNKCJA POTEGOWANIA a DO POTEGI e modulo n
unsigned long long PotegujModulo(unsigned long long a,unsigned long long e)
{
  unsigned long long p,w,m;
  p = a;
  w = m = 1;
  while(m)
  {
    if(e & m) w = MnozModulo(w,p,10);
    p = MnozModulo(p,p,10);
    m<<=1;
  }
   return w;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    unsigned long long podstawa,wykladnik;
    cin>>podstawa>>wykladnik;
    cout<<PotegujModulo(podstawa,wykladnik)<<endl;
  }
  return 0;
}
