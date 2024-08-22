#include<iostream>
using namespace std;
int main()
{
	int n;
	int max=0;
	int *ptr=&max;
	cout<<"enter size of array =";cin>>n;
	int a[n];
	cout<<"\nenter values :)"<<endl;
	for(int j=0;j<n;j++)
	{
		cin>>a[j];
		if(a[j]>max)
		{
			max=a[j];
		}
		
	}
	cout<<"\nmaximum value ="<<*ptr;
}