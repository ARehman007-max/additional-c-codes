#include<iostream>
using namespace std;
int main()
{
	int a=5, X=0,sum=0;
	int W[a];
	for(int i=1;i<=a;i++)
	{
		cout<<"ARRAY"<<i<<'=';cin>>W[i];
		sum=sum+W[i];
	}
	cout<<endl;
	X=sum/5;
	cout<<"AVERAGE OF ALL ARRAYS="<<X;cout<<endl;
	int count=0;
	for(int J=1;J<=a;J++)
	{
	    if(W[J]>X)
	    {
		count++;
		}
	}
	
	cout<<"ARRAY="<<count<<endl;
	return 0;
}
