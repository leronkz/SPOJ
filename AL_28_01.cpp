#include <iostream>
#include <vector>
using namespace std;

vector<string>piramida;

string usun_litery(string& s,int i,int j)
{
    s.replace(i,1,".");
    s.replace(j,1,".");
    return s;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i = 0;
    int j = n-1;
    string s_buff = s;
    while(i!=j)
    {
        piramida.push_back(usun_litery(s,i,j));
        i++;
        j--;
    }
    for(int i=piramida.size()-1; i>=0; i--)
        cout<<piramida[i]<<endl;
    cout<<s_buff<<endl;
    return 0;
}
