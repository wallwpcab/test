//Program name : Password Change
//Author : Touhid Zaman
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    string pass;
    string pas;
    string p;
    string pa;
    string s;
    char pcopy[11110];
    char c;
    cout<<"Enter your new password : ";
    getline(cin, pas);
    size_t l = pas.size();
    l = pas.copy(pcopy,l,0);
    pcopy[l] ='\0';
    cout<<"Confirm your password : ";
    getline(cin, pass);
    size_t l1=pass.size();
    cout<<endl;
    if(pas.compare(pass)==0)
    {
        cout<<"\t"<<"Your password has been stored successfully"<<endl;
    }
    else
    {
        while(pas.compare(pass)!=0)
        {
        cout<<"\t"<<"Sorry !! Your password did not match !!"<<endl<<endl<<"To confirm enter your password again : ";
        getline(cin, pass);
        cout<<endl;
        }
        if(pas.compare(pass) == 0)
        {
          cout<<"\t"<<"Your password has been stored successfully"<<endl;
        }
    }
    cout<<endl;
    cout<<"Do you want to change your password ?"<<endl;
    cout<<"If Yes press 'Y' else press 'N' for no : ";
    cin >> c;
    cout<<endl;
    if(c=='Y')
    {
        cout<<"Enter your present password : ";
        cin>>s;
        if(s.compare(pcopy)==0)
        {
        cout<<"Enter your new password : ";
        cin>>p;
        pas.replace(0,l,p);
        cout<<"Please confirm your password : ";
        cin>>pa;
        pass.replace(0,l1,pa);
        if(pas.compare(pass)==0)
        {
        cout<<"\t"<<"Your password has been stored successfully"<<endl;
        }
        else
        {
        while(pas.compare(pass)!=0)
        {
        cout<<"\t"<<"Sorry !! Your password did not match !!"<<endl<<"To confirm enter your password again:";
        cin>>pa;
        pass.replace(0,l1,pa);
        }
        cout<<endl;
        if(pas.compare(pass)==0)
        {
        cout<<"\t"<<"Your password has been stored successfully"<<endl;
        }
        }
        }
        else
        {
        while(s.compare(pcopy)!=0)
        {
        cout<<"Sorry !! Check your password again : ";
        cin >> s;
        }
        if(s.compare(pcopy) == 0){
        cout<<"Enter your new password : ";
        cin >> p;
        pas.replace(0, l, p);
        cout<<"Please confirm your password : ";
        cin >> pa;
        pass.replace(0, l1, pa);
        if(pas.compare(pass) == 0)
        {
            cout<<"\t"<<"Your password has been stored successfully"<<endl;
        }
        else
        {
        while(pas.compare(pass)!=0)
        {
        cout<<"\t"<<"Sorry !! Your password did not match !!"<<endl<<"To confirm enter your password again : ";
        cin >> pa;
        }
        cout<<endl;
        if(pas.compare(pass)==0)
        {
        cout<<"\t"<<"Your password has been stored successfully"<<endl;
        }
        }
        }
        }
    }
    else if(c=='N')
    {
        cout<<endl;
        cout<<"\t"<<"Thanks !!"<<endl;
    }
    cout<<endl;
    cout<<"Your Present password is : "<<pas<<endl;
    return 0;
}
