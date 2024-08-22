#include<iostream>
using namespace std;
int main()
{ 
int a ,fact=1;
cout<<"ENTER ANY NO FOR FACTORIAL=";
cin>>a;
for( int b; b<=a;b++)
{
	fact=fact*b;
}
	cout<<"FACTORIAL="<<fact;
     return 0;
}
