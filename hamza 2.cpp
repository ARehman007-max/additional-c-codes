#include<iostream>
using namespace std;
int age(int,int ,int)
//HAMZA Q2
{
	int age=0,months,year,days;
	
	cout<<"enter year of birth:";
	cin>>year;
	age=2022-year;
	cout<<"your age:"<<age;
	
	months=age*12;
	cout<<"\n age in months is:"<<months;
	days=age*365;
	cout<<"\n age in days is:"<<days;
	cout<<endl;
}
int leapyears(){
int year;
cout<<"enter year of birth:";
cin>>year;
	if((year%4==0&&year%100!=0)||year%400==0){
		cout<<year<<"is a leap year.";
	}
	else{
		cout<<year<<"is not leap year.";
	}
	cout<<endl;
	
}
int main(){
	int year;
	int a,b,c,d,t;
	
	age(a,b,c);
	leapyears();
}
