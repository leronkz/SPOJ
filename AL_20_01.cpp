#include <iostream>
#include <string>
using namespace std;

int main()
{
    string linia;
    while(getline(cin,linia))
    {
        for(int i=0; i<linia.size(); i++)
        {
            if(!isspace(linia[i]))
            {
                if(linia[i]=='A' || linia[i]=='a')
                {
                    linia.replace(i,1,".-/");
                    i+=2;
                }
                else if(linia[i]=='B' || linia[i]=='b')
                {
                    linia.replace(i,1,"-.../");
                    i+=4;
                }
                else if(linia[i]=='C' || linia[i]=='c')
                {
                    linia.replace(i,1,"-.-./");
                    i+=4;
                }
                else if(linia[i]=='D' || linia[i]=='d')
                {
                    linia.replace(i,1,"-../");
                    i+=3;
                }
                else if(linia[i]=='E' || linia[i]=='e')
                {
                    linia.replace(i,1,"./");
                    i+=1;
                }
                else if(linia[i]=='F' || linia[i]=='f')
                {
                    linia.replace(i,1,".-../");
                    i+=4;
                }
                else if(linia[i]=='G' || linia[i]=='g')
                {
                    linia.replace(i,1,"--./");
                    i+=3;
                }
                else if(linia[i]=='H' || linia[i]=='h')
                {
                    linia.replace(i,1,"..../");
                    i+=4;
                }
                else if(linia[i]=='I' || linia[i]=='i')
                {
                    linia.replace(i,1,"../");
                    i+=2;
                }
                else if(linia[i]=='J' || linia[i]=='j')
                {
                    linia.replace(i,1,".---/");
                    i+=4;
                }
                else if(linia[i]=='K' || linia[i]=='k')
                {
                    linia.replace(i,1,"-.-/");
                    i+=3;
                }
                else if(linia[i]=='L' || linia[i]=='l')
                {
                    linia.replace(i,1,"..-./");
                    i+=4;
                }
                else if(linia[i]=='M' || linia[i]=='m')
                {
                    linia.replace(i,1,"--/");
                    i+=2;
                }
                else if(linia[i]=='N' || linia[i]=='n')
                {
                    linia.replace(i,1,"-./");
                    i+=2;
                }
                else if(linia[i]=='O' || linia[i]=='o')
                {
                    linia.replace(i,1,"---/");
                    i+=3;
                }
                else if(linia[i]=='P' || linia[i]=='p')
                {
                    linia.replace(i,1,".--./");
                    i+=4;
                }
                else if(linia[i]=='Q' || linia[i]=='q')
                {
                    linia.replace(i,1,"--.-/");
                    i+=4;
                }
                else if(linia[i]=='R' || linia[i]=='r')
                {
                    linia.replace(i,1,".-./");
                    i+=3;
                }
                else if(linia[i]=='S' || linia[i]=='s')
                {
                    linia.replace(i,1,".../");
                    i+=3;
                }
                else if(linia[i]=='T' || linia[i]=='t')
                {
                    linia.replace(i,1,"-/");
                    i+=1;
                }
                else if(linia[i]=='U' || linia[i]=='u')
                {
                    linia.replace(i,1,"..-/");
                    i+=3;
                }
                else if(linia[i]=='V' || linia[i]=='v')
                {
                    linia.replace(i,1,"...-/");
                    i+=4;
                }
                else if(linia[i]=='W' || linia[i]=='w')
                {
                    linia.replace(i,1,".--/");
                    i+=3;
                }
                else if(linia[i]=='X' || linia[i]=='x')
                {
                    linia.replace(i,1,"-..-/");
                    i+=4;
                }
                else if(linia[i]=='Y' || linia[i]=='y')
                {
                    linia.replace(i,1,"-.--/");
                    i+=4;
                }
                else if(linia[i]=='Z' || linia[i]=='z')
                {
                    linia.replace(i,1,"--../");
                    i+=4;
                }
            }
            else
            {
                linia.replace(i,1,"/");
            }

        }
        cout<<linia<<endl;
    }
    return 0;
}
