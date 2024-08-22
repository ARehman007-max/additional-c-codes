#include<iostream>
using namespace std;
int age(int);
int main()
{
	int a;
	cout<<"\t\tFIND YOUR AGE:";
	cout<<"\nENTER YEAR IN WHICH BORN=";cin>>a;
	cout<<"\nTHIS IS YOUR AGE="<<age(a);
}
int age(int i)
{
	int age;
	int j=2022;
	age=j-i;
	return age;
}

