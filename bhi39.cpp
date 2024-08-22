#include<iostream>
using namespace std;
int max(int A[]);
int main()
{
	int k[5];
	cout<<"\t\tFIND THE MAXIMUM VALUSE IN ARRAY:\t\t"<<endl;
	for(int a=0;a<5;a++)
	{
	cout<<"ENTER ANY NUMBER"<<a+1<<'=';cin>>k[a];
    }
    cout<<"MAXIMUM NUMBER IN A ARRAY="<<max(k);
}
int max(int A[])
{
   
    int max,j=5;
    for(int i=0;i<j;i++)
    {
    	if(A[i]>A[i+1])
	    
	    max=A[i];
	}
	return max;
}
