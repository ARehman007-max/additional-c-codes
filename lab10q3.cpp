#include<iostream>
using namespace std;
int main()
{
	int a=47;
	cout<<"\nADDRESS OF A="<<&a;
	int *p=&a;
	*p=12;
	cout<<"\nVALUE STORED IN ADDRESS="<<*p;
	cout<<"\nADDRESS OF POINTER="<<p;
	return 0;
}