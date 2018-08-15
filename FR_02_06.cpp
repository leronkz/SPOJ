#include <iostream>

using namespace std;

struct Czlowiek
{
    string imie;
    double waga;
    double wzrost;
    double bmi;
    double BMI(double m,double w);
};

double Czlowiek::BMI(double m,double w)
{
    w = w/100;
    return (m/(w*w));
}
int main()
{
    int t;
    cin>>t;
    Czlowiek czlowiek[t];
    for(int i=0; i<t; i++)
    {
        cin>>czlowiek[i].imie>>czlowiek[i].waga>>czlowiek[i].wzrost;
        czlowiek[i].bmi = czlowiek[i].BMI(czlowiek[i].waga,czlowiek[i].wzrost);
    }
    cout<<"niedowaga"<<endl;
    for(int i=0; i<t; i++)
    {
        if(czlowiek[i].bmi<18.5)
            cout<<czlowiek[i].imie<<endl;
    }
    cout<<endl;
    cout<<"wartosc prawidlowa"<<endl;
    for(int i=0; i<t; i++)
    {
        if(czlowiek[i].bmi>=18.5 && czlowiek[i].bmi<25)
        {
            cout<<czlowiek[i].imie<<endl;
        }
    }
    cout<<endl;
    cout<<"nadwaga"<<endl;
    for(int i=0; i<t; i++)
    {
        if(czlowiek[i].bmi>=25)
            cout<<czlowiek[i].imie<<endl;
    }
    cout<<endl;

    return 0;
}
