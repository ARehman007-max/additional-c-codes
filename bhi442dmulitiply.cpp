#include<iostream>
using namespace std;
int main()
{
	int A[2][2],B[2][2];
	int RESULT[2][2];
	
	cout<<"\t\t\tMULTIPLICATION BETWEEN TWO MATRICS: ";
	cout<<"\n\n\t\tFIRST MATRIC:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"ENTER any NUMBER =";cin>>A[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<A[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\n\tSECAND MATRIC:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"ENTER any NUMBER=";cin>>B[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<B[i][j]<<" ";
		}
	cout<<endl;
}
   RESULT[0][0]={A[0][0]*B[0][0]+A[0][1]*B[1][0]};
   cout<<"R[0][1] "<<RESULT[0][1]<<"A[0][0] "<<A[0][0]<<"B[1][0] "<<B[1][0]<<"A[0][1] "<<A[0][1]<<"B[1][1] "<<B[1][1];
   RESULT[0][1]={A[0][0]*B[0][1]+A[0][1]*B[1][1]};
   RESULT[1][0]={A[1][0]*B[0][0]+A[1][1]*B[1][0]};
   RESULT[1][1]={A[1][0]*B[0][1]+A[1][1]*B[1][1]};
   cout<<"\n\t\tRESULT OF THESE TWO MATRICS:"<<endl;
   cout<<RESULT[0][0]<<" "<<RESULT[0][1]<<endl<<RESULT[1][0]<<" "<<RESULT[1][1];
 return 0;
}

