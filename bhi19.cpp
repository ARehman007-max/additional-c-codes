#include<iostream>
using namespace std;
int main()
{
	int a=4;
	int k=1;
	for(int i=1;i<=a;i++)
	{
	for(int e=5;e>i;e--)	
	{
	cout<<" ";
    }
	for(int c=1; c<=i;c++)
    {
		cout<<'*';
	}
	for(int j=2;j<=i;j++)
	{
		cout<<'*';
	}
	cout<<endl;
}
	for(int b=1;b<=a;b++)
	{
		for(int e=1;e<b+1;e++)	
		{
			cout<<" ";
    	}
		for(int c=0;c<a-b;c++)
    	{
			cout<<'*';
		}
		for(int d=a;d>=b;d-- )
		{
			cout<<'*';
        } 
    	cout<<endl;
    
    }
    	return 0;
    }
	

