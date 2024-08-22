#include<iostream>
using namespace std;
int area(int);
int main()
{
	int A;
	cout<<" RADIAUS=";cin>>A;
	cout<<"AREA ="<< area(A);
}
int  area(int i)
{
	int area;
	int a=3.14;
	 area=3.14*(i*i);
	return  area;
}
