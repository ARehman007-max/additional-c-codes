#include<iostream>
using namespace std;
int main()
{
	int a=5,min=0;
	int num[a];
	for(int b=1;b<=a;b++)
	{
		cout<<"ENTER THE VALUE"<<b<<'=';cin>>num[b];
	}
	cout<<endl;
	min=num[1];
	for(int c=2;c<=6;c++)
	{
		if(min>num[c])
		{
			min=num[c];
	}
	}
		cout<<"these no has mix valuse="<<min<<endl;
	return 0;
}
