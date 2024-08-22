#include<iostream>
using namespace std;
int main()
{
	
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>i;j--)
	
	{
		cout<<" ";
    }
    
	for(int k=i;k>=1;k--)
	{
	cout<<k;	
	}
	for(int b=2;b<=i;b++)
	{
		cout<<b;
	}
	cout<<endl;
    
}
return 0;
}
