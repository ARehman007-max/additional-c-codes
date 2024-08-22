#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"\t\tFIND THE value LOCATION OF A  NUMBER :\t\t"<<endl;
	cout<<"\n\nENTER ANY NUMBER FOR CHECKING=";cin>>a;
	if(a<10)
	{
		cout<<"\nNO THAT YOU ENTER IS LESS THAN 10:)";
	}
	else if(a>10)
	{
		cout<<"\nNO THAT YOU ENTER IS GREATER THAN 10:) ";
	}
	else
	{
		cout<<"\nNO THAT YOU ENTER IS EQUAL TO 10 :)";
	}
	
	
	return 0;
}
