#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string rodzaj;
        int n;
        cin>>rodzaj;
        vector<string>graf;
        vector<int>label;
        string a,b;
        int k;
        if(rodzaj=="d")
        {
            cin>>n;
            for(int i=0; i<n; i++)
            {
                cin>>a>>b;
                graf.push_back(a);
                graf.push_back(b);
            }
            cout<<"digraph {"<<endl;
            for(int i=0; i<graf.size(); i++)
            {
                cout<<graf[i]<<" -> "<<graf[i+1]<<";"<<endl;
                i++;
            }
            cout<<"}"<<endl;
        }
        else if(rodzaj == "g")
        {
            cin>>n;
            for(int i=0; i<n; i++)
            {
                cin>>a>>b;
                graf.push_back(a);
                graf.push_back(b);
            }
            cout<<"graph {"<<endl;
            for(int i=0; i<graf.size(); i++)
            {
                cout<<graf[i]<<" -- "<<graf[i+1]<<";"<<endl;
                i++;
            }
            cout<<"}"<<endl;
        }
        else if(rodzaj=="gw")
        {
            cin>>n;
            for(int i=0; i<n; i++)
            {
                cin>>a>>b>>k;
                graf.push_back(a);
                graf.push_back(b);
                label.push_back(k);
            }
            cout<<"graph {"<<endl;
            int j = 0;
            for(int i=0; i<graf.size(); i++)
            {
                cout<<graf[i]<<" -- "<<graf[i+1]<<" [label = "<<label[j]<<"];"<<endl;
                i++;
                j++;

            }
            cout<<"}"<<endl;
        }
        else if(rodzaj=="dw")
        {
            cin>>n;
            for(int i=0; i<n; i++)
            {
                cin>>a>>b>>k;
                graf.push_back(a);
                graf.push_back(b);
                label.push_back(k);
            }
            cout<<"digraph {"<<endl;
            int j=0;
            for(int i=0; i<graf.size(); i++)
            {
                cout<<graf[i]<<" -> "<<graf[i+1]<<" [label = "<<label[j]<<"];"<<endl;
                i++;
                j++;
            }
            cout<<"}"<<endl;
        }
    }

    return 0;
}
