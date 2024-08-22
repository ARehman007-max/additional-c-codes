#include<iostream>
using namespace std;
int main()
{
	int avg,math ,bio,physics,chemistry,urdu;
	cout<<"ENTER THE NUMBER OF MATH=";cin>>math;
	cout<<"ENTER THE NUMBER OF bio=";cin>>bio;
	cout<<"ENTER THE NUMBER OF physics=";cin>>physics;
	cout<<"ENTER THE NUMBER OF chemistry=";cin>>chemistry;
	cout<<"ENTER THE NUMBER OF urdu=";cin>>urdu;
	avg=(math+bio+physics+chemistry+urdu)/5.0;
	cout<<"AVERAGE="<<avg<<endl;

if(avg>=90)
cout<<"you got A grade";
else if(avg>=80)
cout<<"you got B grade";
else if(avg>=70)
cout<<"you got c grade";
else if(avg>=60)
cout<<"you got d grade";
else
cout<<"you got f grade";
return 0;
}
