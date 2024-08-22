//NAME  ABDUL REHMAN
#include<iostream>
using namespace std;
int main()
//LAB 3 TASK 2
{
int math;
int bio;
int eng;
int urdu;
int cps;
int avg;
cout<<"enter the no of bio=";
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
cout<<"you got A grade";
else if(avg>=80)
cout<<"you got B grade";
else if(avg>=70)
cout<<"you got c grade";
else if(avg>=60)
cout<<"you got d grade";
else
cout<<"you got f grade";

}
