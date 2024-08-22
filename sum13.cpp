#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
	int a,b;
	cout<<"ENTER ANY NO=";cin>>a;
	cout<<"ENTER ANY NO=";cin>>b;
	int s;
	s=sum(a,b);
    cout<<s;
}
int sum(int i,int j)
{
	int s;
	s=i+j;
	return s;
}
