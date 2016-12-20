#include<iostream>
using namespace std;
int primeFactors(int number);
int main()
{
	int number=10;
	primeFactors(number);
	return 0;
}
int primeFactors(int number)
{
	forint i=2;i<=number/i;i++)
	{
		cou<<"i"<<"number="<<number<<endl;
		while(number%i==0)
		{
			number=number/i;
			cout<<"factor "<<i<<endl;
		}
	}
	if(number>1)
	{
    cout<<"Last factor"<<number<<endl;
	}

}
