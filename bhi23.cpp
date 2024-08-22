#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int avg,sum=0;
	int std[a];
	for(int b=1;b<=a;b++)
	{
		cout<<"student"<<b<<'=';cin>>std[b];
		sum=sum+std[b];
	}
	cout<<endl;
	avg=sum/5;
	cout<<"AVERAGE OF ALL STUDENT="<<avg;cout<<endl;
	int count=0;
	for(int c=1;c<=a;c++)
	{
	    if(std[c]>avg)
	    {
		count++;
		}
	}
	
	cout<<"student="<<count<<endl;
	return 0;
}
