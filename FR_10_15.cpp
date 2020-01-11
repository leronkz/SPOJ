#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>A_lub_B;
vector<int>A_i_B;

void quick_sort(vector<int>&tab,int p,int q)
{
    int i = p;
    int j = q;
    int srodek = tab[(p+q)/2];
    do
    {
        while(tab[i]<srodek) i++;
        while(tab[j]>srodek) j--;
        if(i<=j)
        {
            swap(tab[i],tab[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(p<j) quick_sort(tab,p,j);
    if(q>i) quick_sort(tab,i,q);

}
void usun()
{
    auto end = A_lub_B.end();
    for(auto it = A_lub_B.begin(); it!=end; it++)
    {
        end = remove(it+1,end,*it);
    }
    A_lub_B.erase(end,A_lub_B.end());
}

void suma(vector<int>&A,vector<int>&B)
{
    for(int i=0; i<A.size(); i++)
    {
        A_lub_B.push_back(A[i]);
    }
    for(int i=0; i<B.size(); i++)
    {
        A_lub_B.push_back(B[i]);
    }
    usun();
    quick_sort(A_lub_B,0,A_lub_B.size()-1);
}
void iloczyn(vector<int>&A,vector<int>&B)
{
    int k = A.size();
    int p = B.size();
    if(k>p)
    {
        for(int i = 0; i<B.size(); i++)
        {
            for(int j=0; j<A.size(); j++)
            {
                if(B[i]==A[j])
                    A_i_B.push_back(B[i]);
                else if(B[i]<A[j])
                    break;
            }
        }
    }
    else
    {
        for(int i=0; i<A.size(); i++)
        {
            for(int j=0; j<B.size(); j++)
            {
                if(A[i]==B[j])
                    A_i_B.push_back(A[i]);
                else if(A[i]<B[j])
                    break;
            }
        }
    }
}
int main()
{
    int n,k;
    vector<int>A;
    vector<int>B;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    cin>>k;
    for(int i=0; i<k; i++)
    {
        int x;
        cin>>x;
        B.push_back(x);
    }
    quick_sort(A,0,A.size()-1);
    quick_sort(B,0,B.size()-1);
    suma(A,B);
    iloczyn(A,B);
    for(int i=0; i<A_lub_B.size(); i++)
    {
        cout<<A_lub_B[i]<<" ";
    }
    cout<<endl;
    if(A_i_B.size()==0) cout<<"NULL"<<endl;
    else
    {
        for(int i=0; i<A_i_B.size(); i++)
        {
            cout<<A_i_B[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
