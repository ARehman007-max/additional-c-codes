#include<iostream>
using namespace std;
int main()
{
	int a,fact=1;
	cout<<"enter any no for factorial=";
	cin>>a;
	for(int b=1;b<=a;b++)
	{
		fact=fact*b;
	}
	cout<<"factorial="<<fact<<endl;
}
