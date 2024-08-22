//ABDUL REHMAN
#include<iostream>
using namespace std;
int main()
{
	//ABDUL REHMAN
	int a,b;
	cout<<"ENTER VALUE FOR ROW=";cin>>a;
	cout<<"ENTER VALUE OF CALOUMN=";cin>>b;
	int r[a][b];
	cout<<"\t\t TAKING INPUT:\t\t"<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>r[i][j];
		}
		cout<<endl;
	}
	cout<<"\t\tSHOWING OUTPUT:\t\t"<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
