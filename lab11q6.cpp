#include<iostream>
using namespace std;
int main()
{
	int *alp;
	alp=  new int;
	cout<<"Enter Values  :"<<endl;
	for(int i=0;i<4;i++)
	{
		cin>>alp[i];
		
	}
	cout<<"\noutput values :"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<alp[a];
		
	}
	cout<<"\n BY MOLLOc FUNCTION ::";
	cout<<"\n enter value :"<<endl;
	int *alp1=(int*)malloc(1*sizeof(int));
	for(int i=0;i<5;i++)
	{
	 cin>>alp1[i];	
	}
	cout<<"\noutput value :"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<alp1[a]<<endl;
	}
	free(alp);
	free(alp1);
	
}