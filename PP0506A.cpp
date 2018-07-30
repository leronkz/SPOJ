#include <iostream>
#include <math.h>
using namespace std;

struct punkt
{
    string nazwa;
    double x;
    double y;
    double odl;
    double odleglosc(double x,double y);
};
double punkt::odleglosc(double x,double y)
{
    double odl;
    odl=sqrt(pow(x-0,2)+pow(y-0,2));
    return odl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        punkt punkty[n];
        for(int i=0 ; i<n; i++)
        {
            cin>>punkty[i].nazwa>>punkty[i].x>>punkty[i].y;
        }
        for(int j=0; j<n; j++)
        {
            punkty[j].odl=punkty[j].odleglosc(punkty[j].x,punkty[j].y);
        }
        for(int k=0; k<n-1; k++)
        {
            for(int z=0; z<n-1; z++)
            {
                if(punkty[z].odl>punkty[z+1].odl)
                {
                    swap(punkty[z].nazwa,punkty[z+1].nazwa);
                    swap(punkty[z].x,punkty[z+1].x);
                    swap(punkty[z].y,punkty[z+1].y);
                    swap(punkty[z].odl,punkty[z+1].odl);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<punkty[i].nazwa<<" "<<punkty[i].x<<" "<<punkty[i].y<<endl;
        }

    }
    return 0;
}
