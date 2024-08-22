#include<iostream>
using namespace std;
void series(int);
int main()
{
int a;
cout<<"Enter a number for sum =";cin>>a;
series(a);
}
void series(int k)
{
	int sum=0;
	for(int i=k;i>0;i--)
	{
		sum=sum+i;
	}
	cout<<"sum of series="<<sum;
}