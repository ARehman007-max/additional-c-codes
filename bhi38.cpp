#include<iostream>
using namespace std;
int fractorial(int);
int main()
{
	int A;
	cout<<"\t\tFACTORIAL:\t\t";
	cout<<"\n\nENTER ANY NO =";cin>>A;
	fractorial(A);
}
int fractorial(int i)
{
	int fact=1,dig;
	for(int j=i;j>0;j--)
	{
	fact=fact*j;
	}
	cout<<"FACTORIAL OF A NO="<<fact;
}
