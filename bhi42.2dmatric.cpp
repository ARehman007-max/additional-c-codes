#include<iostream>
using namespace std;
int main()
{
	int A[3][3],B[3][3];
	int RESULT[3][3];
	int SUM=0;
	cout<<"\t\t\tMULTIPLICATION BETWEEN TWO MATRICS: ";
	cout<<"\n\n\t\tFIRST MATRIC:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"ENTER any NUMBER =";cin>>A[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<A[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\n\tSECAND MATRIC:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"ENTER any NUMBER=";cin>>B[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<B[i][j]<<" ";
		}
	cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
			SUM=SUM+A[i][k]*B[k][j];
		}
		RESULT[i][j]=SUM;
      }
    }
    cout<<" \n\n\t\t\MULTIPLICATION OF TWO MATRICS: "<<endl;
    for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<RESULT[i][j]<<"  ";
		}
		cout<<endl;
      }
	
 return 0;
}
