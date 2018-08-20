#include <stdio.h>

using namespace std;

void printfloat(float x)
{
    for(int i = sizeof x-1; i>=0; i--)
        printf("%x ",(((const unsigned char*)&x)[i]));
    printf("\n");
}

int main()
{
    int t;
    float x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f",&x);
        printfloat(x);
    }
    return 0;
}
