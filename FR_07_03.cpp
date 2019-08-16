#include <iostream>
#include <vector>
using namespace std;

bool sprawdz(string login,string haslo)
{
    if(login.length()<3 || login.length()>12)
        return false;
    if(haslo.length()<5 || haslo.length()>15)
        return false;
    else
    {
        for(int i=0; i<login.size(); i++)
        {
            if(login[i]<48 || (login[i]>57 && login[i]<65) || (login[i]>90 && login[i]<97) || login[i]>122)
                return false;
        }
        bool duza = false;
        bool mala = false;
        bool cyfra = false;
        bool znak = false;
        for(int i=0; i<haslo.size(); i++)
        {
            if(haslo[i]>=48 && haslo[i]<=57)
                cyfra = true;
            if(haslo[i]>=65 && haslo[i]<=90)
                duza = true;
            if(haslo[i]>=97 && haslo[i]<=122)
                mala = true;
            if(haslo[i]=='!' || haslo[i]=='@' || haslo[i]=='#' || haslo[i]=='$' || haslo[i]=='%' || haslo[i]=='^' || haslo[i]=='&' || haslo[i]=='*' || haslo[i]=='(' || haslo[i]==')' || haslo[i]=='{' ||
                    haslo[i]=='}'|| haslo[i]=='[' || haslo[i]==']' || haslo[i]=='\\' || haslo[i]=='|' || haslo[i]==':' || haslo[i]=='"' || haslo[i]==';' || haslo[i]=='\'' || haslo[i]=='<' || haslo[i]=='>' || haslo[i]=='>' ||
                    haslo[i]=='?' || haslo[i]==',' || haslo[i]=='.' || haslo[i]=='/')
            {
                znak = true;
            }
        }
        if(duza==true && mala==true && cyfra==true && znak==true)
            return true;
        else
            return false;
    }
}

int main()
{
    string operacja;
    int n;
    vector<string>loginy = {" "};
    vector<string>hasla = {" "};
    while(cin>>operacja>>n)
    {
        if(operacja == "register")
        {
            for(int i=0; i<n; i++)
            {
                string login,haslo;
                cin>>login>>haslo;
                for(int i=0; i<login.size(); i++)
                    login[i] = tolower(login[i]);
                if(sprawdz(login,haslo))
                {
                    bool t = true;
                    for(int i=0; i<loginy.size(); i++)
                    {
                        if(login != loginy[i])
                            t = false;
                        else
                        {
                            t = true;
                            break;
                        }
                    }
                    if(!t)
                    {
                        loginy.push_back(login);
                        hasla.push_back(haslo);
                        cout<<"Zarejestrowano"<<endl;
                    }
                    else
                    {
                        cout<<"Login zajety"<<endl;
                    }
                }
                else
                {
                    cout<<"Blad"<<endl;
                }
            }
        }
        else if(operacja == "login")
        {
            bool t = false;
            for(int i=0; i<n; i++)
            {
                string login,haslo;
                cin>>login>>haslo;
                for(int i=0; i<login.size(); i++)
                    login[i] = tolower(login[i]);
                for(int i=0; i<loginy.size(); i++)
                {
                    if(login!=loginy[i])
                    {
                        t = true;
                    }
                    else
                    {
                        t = false;
                        break;
                    }
                }
                if(t)
                    cout<<"Konto nie istnieje"<<endl;
                else
                {
                    for(int i=0; i<loginy.size(); i++)
                    {
                        if(login == loginy[i] && haslo != hasla[i])
                            cout<<"Zle haslo"<<endl;
                        else if(login==loginy[i] && haslo == hasla[i])
                            cout<<"Zalogowano"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
