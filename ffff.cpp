#include<iostream>
using namespace std;
void facty(int,int);//FUNCTION PF LEAP YEAR:)
int finddate(string dob,string cdate)
//NAME :ABDUL REHMAN Q2:
{
	int dob_y=0,cur_y=0;
	int dob_m=0,cur_m=0;
	
	int dob_d=0,cur_d=0;
	int mdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for( i=0;dob[i]!=32;i++)
	{
		int a=dob[i]-48;
	
	dob_y=dob_y*10+a;

    }
	i=i+1;
	while(dob[i]!=32)
	{
	     int a=dob[i]-48;
		dob_m=dob_m*10+a;
		i++;
			
	}
	i=i+1;
	while(i!=dob.length())
	{
	int a=dob[i]-48;
	dob_d=dob_d*10+a;
	i++;
    }
cout<<"DATE OF year = "<<dob_y<<" DATE OF BIRTH month = "<<dob_m<<" DATE OF BIRTHDAY  = "<<dob_d<<endl;
	
		for( i=0;cdate[i]!=32;i++)
	{
		int a=cdate[i]-48;
	    cur_y=cur_y*10+a;
	
    }
	i=i+1;
	while(cdate[i]!=32)
	{
	     int a=cdate[i]-48;
		cur_m=cur_m*10+a;
		i++;
		
	}
	i=i+1;
	while(i!=cdate.length())
	{
	int a=cdate[i]-48;
	cur_d=cur_d*10+a;
	i++;
}

	cout<<" CURRENT YEAR = "<<cur_y<<"   CURRENT MONTH= "<<cur_m<<"  CURRENT DATA = "<<cur_d<<endl;


int uryear = cur_y - dob_y;
int urmonth=dob_m;
int urdate=cur_d-dob_d;
if(cur_m-dob_m<0)
{
	uryear--;
	urmonth=12-dob_m+cur_m;
}
if(cur_d-dob_m<0)
{
	urmonth--;
	urdate=mdays[dob_d-1]-dob_d+cur_d;
}

cout<<"YOUR AGE = "<<uryear<<" YEARS= "<<urmonth<<" MONTHS= "<<urdate<<" DAYS "<<endl;
facty(cur_y,dob_y);
}
void facty(int cdate, int dobdate)
{

	int leapyear=0;
	for(int i=dobdate;i<=cdate;i++)
	{
	
		if((i%100==0&&i%400==0)||(i%4==0))
		{
		
		leapyear++;
	    }
	}
	cout<<" YOU HAVE LIVED "<<leapyear<<" LEAPYEARS:)\n";
}
main()
{
	cout<<"\t\t\tMETHOD OF FINDING DAYS YOU LIVED IN YOUR LIFE:)"<<endl;
	cout<<"PLEASE ENTER CURRENT DATA:)\n";
	string cdate;
	getline(cin,cdate);
	
	cout<<"PLEASE ENTER DAY OF BIRTH:)\n";
	string dob;
	getline(cin,dob);
    finddate(dob,cdate);
	
}
