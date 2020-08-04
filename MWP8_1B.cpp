#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void podziel_na_slowa(string s,vector<string>&p)
{
  string ss;
  int i, n;
  unsigned char c;
  ss = "";
  s += " ";
  n = s.length( );
  for( i = 0; i < n; i++ )
  {
    c = s [ i ];
    if( ( ( c >= '0' ) && ( c <= '9' ) ) ||
          ( c == '_' ) || ( c == '-' )   ||
        ( ( c >= 'A' ) && ( c <= 'Z' ) ) ||
        ( ( c >= 'a' ) && ( c <= 'z' ) ) ||
          ( c == 164 ) || ( c == 165 )   ||
          ( c == 143 ) || ( c == 134 )   ||
          ( c == 168 ) || ( c == 169 )   ||
          ( c == 157 ) || ( c == 136 )   ||
          ( c == 227 ) || ( c == 228 )   ||
          ( c == 224 ) || ( c == 162 )   ||
          ( c == 151 ) || ( c == 152 )   ||
          ( c == 141 ) || ( c == 171 )   ||
          ( c == 189 ) || ( c == 190 ) )
      ss += c;
    else if( ss != "" )
    {
      p.push_back(ss);
      ss = "";
    }
  }
}


int main()
{
    string s1,s2;
    vector<string>p1,p2,f;
    p1.clear();
    p2.clear();
    f.clear();
    getline(cin,s1);
    getline(cin,s2);
    if(s1==s2){
        cout<<"0"<<endl;
        return 0;
    }
    podziel_na_slowa(s1,p1);
    podziel_na_slowa(s2,p2);
    int i = 0;
    int j = 0;
    while(j<p1.size())
    {
        if(p2[i]==p1[j])
        {
            i++;
            j++;
        }
        else
        {
            f.push_back(p1[j]);
            j++;
        }
    }
    sort(f.begin(),f.end());
    cout<<f.size()<<endl;
    for(int k=0; k<f.size(); k++)
        cout<<f[k]<<endl;
    return 0;
}
