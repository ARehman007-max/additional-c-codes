#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"\t\tFIND  NUMBER:\t\t";
	cout<<"\nENTER ANY NUMBER=";cin>>a;
	if( a<=10)
	cout<<"\nNUMBER IS BETWEEN 1 TO 10="<<a;
	else if( a>=11)
	cout<<"\nNUMBER IS GREATER THAN 10="<<a;
	else 
	cout<<"WRONG INPUT";
	return 0;
	
	
}
