#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,dig;
cout<<"enter a no for sum of integers=";
cin>>num;
int temp=num;
{
while(temp>0)
{

dig=temp%10;
temp=temp/10;
sum=sum+(dig*dig*dig);
}
cout<<num<<'='<<sum;
return 0;
}
}
