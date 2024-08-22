#include<iostream>
using namespace std;
int main()
{
	int A[2][3];
	
	//Input
	for(int i=0; i<2;i++)
	{
		if(i%2==0)
		cout<<"Enter three Even Values: \n";
		else
		cout<<"Enter three odd values: \n";
		for(int j=0; j<3; )
		{
		if(i%2==0)
		{
		cin>>A[i][j];
		if(A[i][j]%2!=0)
		continue;
		}
		else
		{
		cin>>A[i][j];
		if(A[i][j]%2==0)
		continue;
		}
		j++;	
		}
		cout<<endl;
	}
	
	for(int i=0; i<2;i++)
	{
		cout<<"Values of Row "<<i<<" are:    ";
		for(int j=0; j<3; j++)
		{
			cout<<A[i][j]<<"    ";
		}
		cout<<endl<<endl;
	}
}
