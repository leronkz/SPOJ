#include <iostream>

using namespace std;

int main()
{
    char znak;
    int rejestr[10]={0,0,0,0,0,0,0,0,0,0};
    int a,b;
    while(cin>>znak>>a>>b)
    {
        switch(znak)
        {
        case 'z':
        {
            rejestr[a]=b;
        }break;
        case '+': cout<<rejestr[a]+rejestr[b]<<endl; break;
        case '-': cout<<rejestr[a]-rejestr[b]<<endl; break;
        case '*': cout<<rejestr[a]*rejestr[b]<<endl; break;
        case '/': cout<<rejestr[a]/rejestr[b]<<endl; break;
        case '%': cout<<rejestr[a]%rejestr[b]<<endl; break;
        }
    }
    return 0;
}
