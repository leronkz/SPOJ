#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main( )
{
    string s, ss;
    int i, n;
    unsigned char c;
    while(getline(cin,s))
    {
        vector<string>parts;
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
            else
            {
                parts.push_back(ss);
                ss = "";
            }
        }
        if(parts.size()==1)
            cout<<s<<endl;
        else
        {

        int j = 1;
        string tekst = "";
        for(int i=0; i<parts[0].size(); i++)
        {
            tekst+=parts[0][i];
            tekst+=parts[j];
            j++;
            tekst+=" ";
        }
        cout<<tekst<<endl;
        }

    }
    return 0;
}
