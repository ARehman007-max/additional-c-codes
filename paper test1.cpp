#include<iostream>
using namespace std;
int main()
{
	int hour;
	int sec;
	int min;
	cout<<"\t\tEnter the amout of secand =";cin>>sec;
	hour=sec/3600;
	cout<<"\ntotal no of hours in given sec ="<<hour;
     hour=sec%3600;
	min=hour/60;
	cout<<"\ntotal number of minutes ="<<min;
	min=hour%60;
	sec=sec%60;
	cout<<"\ntotal number of secands ="<<sec;
//	cout<<"" 
}