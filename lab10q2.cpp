#include<iostream>
using namespace std;
int main()
{
	int a=99;
	cout<<"\nADDRESS OF VARIABLE A="<<&a;
	cout<<"\nVALUE STORED IN ADDRESS A="<<a<<endl;
	cout<<"\n\t\tAFTER PASSING ADRESS:";
	int *p=&a;
	cout<<"\n\nADDRESS OF VARIABLE="<<p;
	cout<<"\nVALUE STORED IN ADDRESS="<<*p;
	return 0;
}