#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int convert(string &s)
{
    if(s=="E") return 0;
    if(s=="F#") return 1;
    if(s=="G#") return 2;
    if(s=="A") return 3;
    if(s=="H") return 4;
    if(s=="C#") return 5;
    if(s=="D#") return 6;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int count;
    cin>>count;
    vector<int> notes(count);
    for(int i=0; i!=count; i++)
    {
        string s;
        cin>>s;
        notes[i] = convert(s);
    }
    const int countOfLines = ceil(count/16.0);
    vector<vector<string>> lines(countOfLines,vector<string>(11));
    for(auto &a : lines)
    {
        for(int i = 0; i!=a.size(); i++)
        {
            if(i%2==0)
                a[i] = "|                        |                        |                        |                        |";
            else
                a[i] = "|------------------------|------------------------|------------------------|------------------------|";
        }
    }
    int off = 3;
    int line = 0;
    for(int i=0; i!=count; i++)
    {
        if(i%16==0)
        {
            off = 3;
            if(i>0)
                line++;
        }
        else if(i%4==0)
            off = ((i%16)/4)*25+3;

        if(off>101)
            off=3;

        lines[line][9-notes[i]][off] = 'o';
        lines[line][9-notes[i]][off+1] = '|';
        lines[line][8-notes[i]][off+1] = '|';
        lines[line][7-notes[i]][off+1] = '|';
        lines[line][7-notes[i]][off+2] = '\\';

        if(notes[i]==1 || notes[i]==2 || notes[i]==5 || notes[i]==6)
            lines[line][9-notes[i]][off-1] = '#';

        off+=6;
    }
    for(auto &a : lines)
    {
        for(auto &s :a)
            cout<<s<<endl;
    }
        return 0;
}
