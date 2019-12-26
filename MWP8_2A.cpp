#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double a1b1=0,a1c1=0,b1c1=0;
double a2b2=0,a2c2=0,b2c2=0;

void oblicz_dlugosci(vector<int>&w)
{
    a1b1=0;a1c1=0;b1c1=0;
    a2b2=0;a2c2=0;b2c2=0;
    a1b1 = sqrt(pow(w[2]-w[0],2)+pow(w[3]-w[1],2));
    a1c1 = sqrt(pow(w[4]-w[0],2)+pow(w[5]-w[1],2));
    b1c1 = sqrt(pow(w[4]-w[2],2)+pow(w[5]-w[3],2));
    a2b2 = sqrt(pow(w[8]-w[6],2)+pow(w[9]-w[7],2));
    a2c2 = sqrt(pow(w[10]-w[6],2)+pow(w[11]-w[7],2));
    b2c2 = sqrt(pow(w[10]-w[8],2)+pow(w[11]-w[9],2));
}

bool czy_rowne_pola()
{
    double p1=0,p2=0;
    p1 = (a1b1+a1c1+b1c1)/2;
    p2 = (a2b2+a2c2+b2c2)/2;
    if(p1==p2) return true;
    else return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>wsp;
        wsp.resize(12);
        wsp.clear();
        for(int i=0; i<12; i++)
        {
            int x;
            cin>>x;
            wsp.push_back(x);
        }
        oblicz_dlugosci(wsp);
        if(czy_rowne_pola()) cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
    }
    return 0;
}
