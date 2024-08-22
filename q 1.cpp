#include<iostream>
using namespace std;
int main()
{
	int year;
	int weight;
	cout<<"\tFBR:\t"<<endl;
	cout<<"ENTER YEAR=";
	cin>>year;
	cout<<"enter wieght=";
	cin>>weight;
if(year<=1970)
{
		if(weight<2700)
		{
		cout<<"WEIGHT CLASS IS= 1"<<endl;
		cout<<"REGISTERATION FEE =RS 1650 ONLY ";
		}
	
			else if(weight>=2700 && weight<=3800)
    	{
		cout<<"WEIGHT CLASS IS=2"<<endl;
		cout<<"REGISTRATION FEE IS =RS 2550 ONLY";
		}
		else if(weight>3800)
	{
		cout<<"WEIGHT CLASS IS = 3"<<endl;
		cout<<"REGISTRATION FEE = RS 4650";
	}
}
	else if (year>=1971 && year<=1979)
		 if (weight<2700)
		{
		cout<<"WEIGHT CLASS IS =4"<<endl;
		cout<<"REGISTRATION FEE = RS 2700 ONLY";
		}
		else if (weight>=2700 && weight<=3800)
		{
		cout<<"WEIGHT CLASS IS =5"<<endl;
		cout<<"REGISTRATION FEE = RS 3050 ONLY";
		}
		else if (weight>3800)
		{
		cout<<"WEIGHT CLASS IS =6"<<endl;
		cout<<"REGISTRATION FEE = RS 5250 ONLY";
	}
	else if ( year>=1980 )
	
		 if (weight<3500)
	{
			cout<<"WEIGHT CLASS IS =7"<<endl;
		cout<<"REGISTRATION FEE = RS 1950 ONLY";
		}
		else if (weight>=3500)
		{
		cout<<"WEIGHT CLASS IS =8"<<endl;
		cout<<"REGISTRATION FEE = RS 5250 ONLY";
	}
	else
	cout<<"opps!wrong information";
    return 0;
}
