#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"\t\tFIND THE NUMBER is EVEN OR ODD :\t\t"<<endl;
	cout<<"\n\nENTER ANY NUMBER FOR CHECKING=";cin>>a;
	if(a%2==0)
	{
		cout<<"\nNO THAT YOU ENTER IS EVEN:)";
	}
	else if(a%2==1)
	{
		cout<<"\nNO THAT YOU ENTER IS ODD:) ";
	}
	else
	{
		cout<<"\nWRONG INPUT :)";
	}
	
	
	return 0;
}
