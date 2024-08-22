#include<iostream>
using namespace std;
int main()
{
	
	int a=0;
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
    {
    	cout<<" ";
	}
	for(int b=1;b<=i+a;b++)
{
	cout<<'*';
}
cout<<endl;
a++;
}
return 0;
}
