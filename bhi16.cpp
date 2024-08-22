#include<iostream>
using namespace std;
int main()
{
	int num[3];
//	cout<<"ENTER THE FIRST VALUE=";
//	cin>>num[0];
//	cout<<"ENTER THE SECAND VALUE=";
//	cin>>num[1];
//	cout<<"ENTER THE THIRD VALUE=";
//	cin>>num[2];
    for(int i=0;i<3;i++)
    {
    cout<<"enter any number for num=";
    	cin>>num[i];
}
	if(num[0]>num[1] && num[0]>num[2])
	{
		cout<<"num1 is biggest"<<endl;
	}
	else if(num[1]>num[0] && num[1]>num[2])
	{
		cout<<"num2 is biggest"<<endl;
	}
	else if(num[2]>num[0] && num[2]>num[1])
	{
		cout<<"num3 is biggest"<<endl;
	}
	else 
	cout<<"wrong input";
	return 0;
}
