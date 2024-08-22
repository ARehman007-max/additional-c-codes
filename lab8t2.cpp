#include<iostream>
using namespace std;
void up(int &i,int &j)
{
	if(i<j)

	{
		int temp;
		temp=i;
		i=j;
		j=temp;
	}
	
	
}
int main()
	{
		
	int a,b;
	cout<<"\t\tSIMPLE SORTING PROGRAM:\t\t";
	cout<<"\nENTER FIRST VALUE=";cin>>a;
	cout<<"ENTER SECAND VALUE=";cin>>b;
	cout<<"Before swapping a = "<<a<<endl;
	cout<<"Before swapping b = "<<b<<endl;
	up(a,b);
	cout<<"\n\nAfter swapping a = "<<a<<endl;
	cout<<"After swapping b = "<<b<<endl;

	}    


