#include<iostream>
using namespace std;
int main()
{
    int n;
	int num[n];
	cout<<"SIZE OF AN ARRAY=";cin>>n;
	for(int a=0;a<n;a++)
	{
	cout<<"num"<<a<<'='; cin>>num[a];	
	}
	cout<<endl;
	
    for(int d=0;d<n;d++)
	{
		cout<<"VALUE OF ARRAY="<<num[d]<<endl;	
	}
	
	return 0;	
}
