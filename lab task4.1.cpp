#include<iostream>
using namespace std;
int main()
{
	int power=1,exp,base ,sum=1;
	base=2;
	exp=5;
	for(int a=0;a<=exp;a++)
	{
	power=power*base;
	sum=sum+power;
	}
	cout<<"sum="<<sum;
	
}
