#include<iostream>
using namespace std;
int main()
{
	int w;
	int a;
	int b;
	cout<<"amount of water=";
	cin>>w;
	a=0;
	b=0;
	if (w<=10)
	{
		cout<<"water is free:";
	}
	else if (w<=100)
	{
	a=w-10;
	cout<<"total fee= "<<a*10;
}
    else if(w>100)
    {
    a=w-10;
    b=a*10;
	cout<<"total amount with extra fee="<<b+500;
	}
	else
	cout<<"wrong input";
	return 0 ;
}
