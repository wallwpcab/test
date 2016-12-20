#include<iostream>
using namespace std;
class complex
{
	//a+bi;
private:
	double real;
	double imag;
public:
	complex()
	{
		real=0;
		imag=0;
	}
	complex(double x,double y)
	{
		real=x;
		imag=y;
	}
	void show()
	{
		cout<<real<<"+"<<imag<<"i";
	}
	friend complex sum(complex c1,complex c2);
};
//friend function//
complex sum(complex c1,complex c2)
{
	complex c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	return c3;
}
int main()
{
	complex c1(2.3,4.5);
    c1.show();
	complex c2=complex(3.4,6.7);
	c2.show();
	complex c3 =sum(c1, c2);
	cout<<"the sum of complex number c1 and c2:"<<endl;
	c3.show();
	cin.get();
}

