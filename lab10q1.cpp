#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\tSTORE THE ADDRESS OF VARIABLE:";
	int a=47;
	cout<<"\nADDRESS OF A="<<&a;
	int *p=&a;
	cout<<"\nVALUE STORED IN ADDRESS="<<*p;
}