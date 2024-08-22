#include<iostream>
using namespace std;
int main()
{
	int A;
	int rev=0;
	int dig1;
	int dig2;
	int dig3;
	cout<<"TASK 01:"<<endl;
	cout<<"\t\tBEFORE SWAPING:\t\t"<<endl;
	cout<<" VALUE OF A =";
	cin>>A;
	int num=A;
	cout<<"\t\tAFTER SWAPING:\t\t"<<endl;
	dig1=A%10;
	A=A/10;
	dig2=A%10;
	dig3=A/10;
	A=A%10;
	rev=rev*10+dig1;
	rev=rev*10+dig2;
	rev=rev*10+dig3;
	cout<<"VALUE OF A="<<rev<<endl;
	if(num==rev)
	cout<<"BOTH VALUES ARE SAME:";
	else
	cout<<"BOTH ARE DIFFERENT:";
	return 0;
}
