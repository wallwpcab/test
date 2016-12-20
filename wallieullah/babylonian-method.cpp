#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
float number=0,estimation=1;
cout<<"Enter a number";
cin>>number;
//square root is a recursive estimation //
for(int n=0;n<20;n++)
{
//square root is a recursive estimation //
cout<<"iteration#"<<n+1;
//babylonian method //
estimation=(estimation +(number/estimation))/2;
cout<<":Estimation="<<estimation<<endl;
}
//getch():
return 0;
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int i=0;
    string name;
    vector<string>Students_name;
    for(i=0;i<3;i++)
    {
    cout<<"Enter student name";
    cin>>name;
    Students_name.push_back(name);
    }
    for(i=0;i<3;i++)
    {
    cout<<Students_name[i];
    cout<<endl;
    }
    return 0;
}
