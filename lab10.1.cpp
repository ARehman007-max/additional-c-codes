#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"ENTER VALUES OF A =";cin>>a;
	cout<<"ENTER VALUES OF B =";cin>>b;
	cout<<"\nADDRESS OF VARIABLE A="<<&a;
	cout<<"\nVALUE STORED IN ADDRESS A="<<a;
	cout<<"\nADDRESS OF VARIABLE B="<<&b;
	cout<<"\nVALUE STORED IN ADDRESS B="<<b;
	int *i= &a;
	int *j= &b;
	cout<<"\nVALUE STORED IN ADDRESS (I)="<<*i;
	cout<<"\nVALUE STORED IN ADDRESS (J)="<<*j;
	 return 0;
}