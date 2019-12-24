#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define PB push_back
vector<int>pierwsze;

void sito()
{
  unsigned int c, k, t, q, m, n, i, j, ij;
  bool * S;
  n=400;
  m = n / 3;
  if(!(m & 1)) m++;
  S = new bool [ m + 1 ];
  c = 0; k = 1; t = 2;
  q = ((unsigned int)sqrt(n)) / 3;
  for(i = 1; i <= m; i++) S [ i ] = true;
  for(i = 1; i <= q; i++)
  {
    k  = 3 - k;
    c  += (k << 2) * i;
    j  = c;
    ij = (i << 1) * (3 - k) + 1;
    t  += k << 2;
    while(j <= m)
    {
      S [ j ] =  false;
      j    += ij;
      ij   =  t - ij;
    }
  }
  pierwsze.PB(2);
  pierwsze.PB(3);
  for(i = 1; i <= m; i++)
    if(S [ i ])
    {
      if(i & 1) pierwsze.PB(3*i+2);
      else      pierwsze.PB(3*i+1);
    }
}

int main()
{
    sito();
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int a,b;
        bool k = false;
        for(int i=0; i<pierwsze.size(); i++)
        {
            for(int j=0; j<pierwsze.size(); j++)
            {
                if(pierwsze[i]+pierwsze[j]==s)
                {
                    k = true;
                    a = pierwsze[i];
                    b = pierwsze[j];
                    break;
                }
            }
            if(k) break;
        }
        if(k) cout<<"TAK "<<a<<" "<<b<<endl;
        else cout<<"NIE"<<endl;
    }
    return 0;
}
