#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int sum;
	cout<<"ENTER 10 NO:";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"value of sum="<<sum;
}
