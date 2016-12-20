/*#include<iostream>
using namespace std;
int main()
{
int x,y,sum;
while(!(cin>>x>>y).eof())
{
sum=x+y;
cout<<"X = "<<sum<<endl;
continue;
return 0;
}
}*/
/*#include<iostream>
int main()
{
	std::cout<<"Hello World!";
	std::cout<<std::endl;
	return 0;
}*/
#include<iostream>

using namespace std;

int main()
{
    int n ,ano = 0,mes = 0,dia = 0 ;
    cin >> n ;
    ano = n / 365 ;

    mes = n -(ano*365);

    mes = mes / 30 ;

    dia = n -( mes*30+ano*365) ;

    cout << ano <<" ano(s)" <<  endl << mes << " mes(es)" << endl << dia << " dia(s)" << endl;
    return 0 ;
}





