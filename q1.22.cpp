#include<iostream>
using namespace std;
int main()
{ 
for(int i=1;i<=5;i++)
{
	for(int j=5;j>=i;j--)
	{
		cout<<" ";
	}
	for(int a=i;a>=1;a--)
	{
		cout<<a;
	}
	for(int b=2;b<=i;b++)
	{
		cout<<b;
	}
	cout<<endl;
}
return 0;
}
