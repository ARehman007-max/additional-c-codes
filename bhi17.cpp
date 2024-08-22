#include<iostream>
using namespace std;
int main()
{

	for(int b=1;b<=5;b++)
	{
	for(int e=5;e>=b;e--)	
	{
	cout<<" ";
    }
	for(int c=1; c<=b;c++)
    {
		cout<<'*';
	}
	for(int j=2;j<=b;j++)
	{
		cout<<'*';
	}
    cout<<endl;
}
	return 0;
}

