#include<iostream>
using namespace std;
double sum();
int main()
{
	cout<<"\t\tSUM OF SERIES="<<sum()<<endl;
}
double sum()
{
	double fact=1,j=0;
	for(int a=1;a<=5;a++)
	{
		fact=fact*a;
		j=j+(a/fact);
	}
	return j;
}
