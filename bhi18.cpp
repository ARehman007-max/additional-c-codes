#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int k=1;
    for(int b=1;b<=a;b++)
	{
		for(int e=0;e<=b;e++)	
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
