#include<iostream>
using namespace std;
int main()
{
	int x=20;
	int y =25;
	int z;
	int *ptr=&x;
	cout<<"address of x= "<<&x;
	z=2*x;
	cout<<"\nvalue of z="<<z;
	cout<<"\nvalue of z = "<<ptr;
	cout<<"\naddress of x= "<<*ptr;
	int *alp=&y;
	cout<<"\naddress of y without & = "<<*alp;
	cout<<"\naddress of y with & = "<<&y;
	z=5*y;
		cout<<"\nvalue of z="<<z;
	cout<<"\nvalue of z = "<<*alp;
}