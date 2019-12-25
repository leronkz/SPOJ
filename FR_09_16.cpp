#include <iostream>

using namespace std;

int main()
{
    int kubki[5];
    for(int i=0; i<5; i++)
    {
        cin>>kubki[i];
    }
    int i=0;
    while(i<4)
    {
        int m1 = kubki[(i+1)%5] + kubki[(i+2)%5];
        int b1 = kubki[(i+3)%5] + kubki[(i+4)%5];
        int m2 = kubki[(i+1)%5] + kubki[(i+3)%5];
        int b2 = kubki[(i+2)%5] + kubki[(i+4)%5];
        int m3 = kubki[(i+1)%5] + kubki[(i+4)%5];
        int b3 = kubki[(i+2)%5] + kubki[(i+3)%5];
        if(m1==2*b1 || m1==b1/2 || m2==2*b2 || m2==b2/2 || m3==2*b3 || m3==b3/2)
        {
            cout<<i+1<<endl;
            break;
        }
        i++;
    }
    if(i==4) cout<<"5"<<endl;

    return 0;
}
