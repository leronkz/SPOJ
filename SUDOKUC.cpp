#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sudoku[9][9];
        int tymczasowa[9];
        bool czy_sudoku=true;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cin>>sudoku[i][j];
            }
        }
        //PIERWSZY WARUNEK KTORY MUSI BYC SPELNIONY
        //CZY WSZYSTKIE LICZBY W DANYM WIERSZU I KOLUMNIE SA WIEKSZE OD 0 I MNIEJSZE OD 10
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(sudoku[i][j]<0 || sudoku[i][j]>9)
                {
                    czy_sudoku=false;
                }
            }
        }
        //DRUGI WARUNEK KTORY MUSI BYC SPELNIONY
        //CZY WSZYSTKIE LICZBY W DANYM WIERSZU SĄ ROZNE
        if(czy_sudoku)
        {
            for(int i=0; i<9; i++)
            {
                for(int j=0; j<9; j++)
                {
                    for(int k=j+1; k<9; k++)
                    {
                        if(sudoku[i][j]==sudoku[i][k])
                        {
                            czy_sudoku=false;
                        }
                    }
                }
            }
        }
        //TRZECI WARUNEK KTORY MUSI BYC SPELNIONY
        //CZY WSZYSTKIE LICZBY W DANEJ KOLUMNIE SA ROZNE
        if(czy_sudoku)
        {
            for(int i=0; i<9; i++)
            {
                for(int j=0; j<9; j++)
                {
                    for(int k=i+1; k<9; k++)
                    {
                        if(sudoku[i][j]==sudoku[k][j])
                        {
                            czy_sudoku=false;
                        }
                    }
                }
            }
        }
        //CZWARTY WARUNEK KTORY MUSI BYC SPELNIONY
        //CZY WSZYKIE LICZBY W KWADRACIE 3X3 SA ROZNE
        if(czy_sudoku)
        {
            for(int k=0; k<9; k+=3)
            {
                for(int l=0; l<9; l+=3)
                {
                    int t=0;
                    for(int i=0; i<3; i++)
                    {
                        for(int j=0; j<3; j++)
                        {
                            tymczasowa[t++]=sudoku[k+i][l+j];
                        }
                    }
                    for(int i=0; i<9; i++)
                    {
                        for(int j=i+1; j<9; j++)
                        {
                            if(tymczasowa[i]==tymczasowa[j])
                            {
                                czy_sudoku=false;
                            }
                        }
                    }
                }
            }
        }
        if(czy_sudoku)
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    }

    return 0;
}
