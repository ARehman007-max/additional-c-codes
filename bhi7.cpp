#include<iostream>
using namespace std;
int main()
{
	int base,exp,sum,power=1,a;	
	base=2;
	cout<<"enter the value of base="<<base<<endl;
	exp=7;
	cout<<"enter the value of exponent="<<exp<<endl;
	for(a=1;a<=exp;a++)
	{
		power=power*base;
		sum=sum+power;
	}
cout<<"sum of follwing="<<sum<<endl;
}
