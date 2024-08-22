#include<iostream>
using namespace std;
void TOTAL(int,int,int,int);
int main()
{
	int A,B,C,D;
	TOTAL(A,B,C,D);
}
void TOTAL(int age=0,int year=0,int month=0,int days=0)
{
	cout<<"\t\tFIND YOUR AGE IN DAYS:";
	cout<<"\nENTER YEAR IN WHICH YOU BORN =";cin>>year;
	age=2022-year;
	cout<<"\nYOUR AGE IN YEARS="<<age;
	month=age*12;
	cout<<"\nTOTAL MONTHS YOU LIVE IN YOUR LIFE="<<month;
	days=age*365;
	cout<<"\nTOTAL DAYS IN YOU LIVE IN YOUR LIFE="<<days;
}
