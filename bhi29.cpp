#include<iostream>
using namespace std;
int main()
{
	int math;
int bio;
int eng;
int urdu;
int cps;
int avg;
cout<<"\t\tRESULT CARD OF AN STUDENT:\t\t";
cout<<"\nenter the no of bio=";
cin>>bio;
cout<<"enter the number of math=";
cin>>math;
cout<<"enter the number of eng=";
cin>>eng;
cout<<"enter the number of urdu=";
cin>>urdu;
cout<<"enter the number of computer=";
cin>>cps;
avg=(math+bio+urdu+cps+eng)/5.0;
cout<<"AVERAGE="<<avg<<endl;

if(avg>=90)
{
cout<<"\t\tMASHALLAH:)"<<endl;
cout<<"\n\nyou got A grade";
}
else if(avg>=80)
{
cout<<"\t\tMASHALLAH:)"<<endl;
cout<<"\n\nyou got B grade";
}
else if(avg>=70)
{
cout<<"\t\tMASHALLAH:)"<<endl;
cout<<"you got c grade";
}
else if(avg>=60)
{	
cout<<"\t\tFEEL SAD FOR YOU:("<<endl;
cout<<"you got d grade";
}
else
{
cout<<"\t\tFEEL SAD FOR YOU:("<<endl;
cout<<"you got f grade";
}
return 0;
}
