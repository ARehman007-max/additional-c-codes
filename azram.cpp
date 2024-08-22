
#include<iostream>
using namespace std;
int main()
{
	int n;
    int max=0;
   int *p=&max;
    cout<<"ENTER THE SIZE OF ARRAY=";cin>>n;
     int a[n];
	for(int i=0;i<n;i++)
	{
	cout<<"enter value"<<i+1<<"=";cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
		}

	}
	cout<<"\nMAXIMUN VALUE="<<*p;	
	return 0;
	
}
