#include<iostream>
using namespace std;
void A(char);
int main()
{
	char B;
	cout<<"\t\tFIND THE UPPER AND LOWER CLASS:\t\t";
	cout<<"\nENTER ANY WORD=";cin>>B;
	A(B);
}
void A(char i)
{
	if(i>='A' && i<='Z')
	{
		cout<<"WORD YOU ENTERED IS UPPER CLASS="<<i;
	}
	else if(i>='a' && i<='z')
	{
		cout<<"WORD YOU ENTERED IS LOWER CLASS="<<i;
	}
	
}
