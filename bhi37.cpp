#include<iostream>
using namespace std;
int sum(int k[]);
int main()
{
	int k[5];
	for(int i=0;i<5;i++)
	{
		cout<<"ENTER ANY NO"<<i+1<<'=';cin>>k[i];
	}
	cout<<"SUM OF ALL ARRAY ELEMENTS="<<sum(k);	
}
int sum(int T[])
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+T[i];
	}
	return sum;
}
