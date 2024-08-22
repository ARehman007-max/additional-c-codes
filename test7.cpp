#include<iostream>
using namespace std;
void calcu(int,char,int);
int main()
{
	cout<<"simple function calculator :)";
	int a,b;
	char c;
	cout<<"\nenter first value =";cin>>a;
	cout<<"enter secand value =";cin>>b;
	cout<<"enter any thing(*/-%) =";cin>>c;
	calcu(a,c,b);
}
void calcu(int i,char j,int k)
{
	if(j=='-')
	{
		cout<<i<<'-'<<k<<'='<<i-k;
	}
	if(j=='+')
	{
		cout<<i<<'+'<<k<<'='<<i+k;
	}
	if(j=='*')
	{
		cout<<i<<'*'<<k<<'='<<i*k;
	}
	if(j=='/')
	{
		cout<<i<<'/'<<k<<'='<<i/k;
	}
}