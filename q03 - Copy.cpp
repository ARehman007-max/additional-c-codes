#include<iostream>
using namespace std;
int main()
{
	int b,ex,power=1;
	cout<<"ENTER ANY NO FOR BASE=";
	cin>>b;
	cout<<"ENTER ANY NO FOR EXPONENT=";
	cin>>ex;
	for(int a;a<=ex;a++)
	{
	power=power*b;
    }
    cout<<"power of base ="<<power;
    return 0;
}
