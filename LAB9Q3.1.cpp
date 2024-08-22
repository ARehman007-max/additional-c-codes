#include<iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
};
int main()
{
	time wild[2];
	cout<<"\t\t\tMETHOD OF FINDING THE TIME DIFFERENCE:";
	cout<<"\n\n\t\tPLEASE ENTER THE ASKED INFORMATION:)";
	cout<<"\nENTER THE HOURS of FIRST TIME PERIOD=";cin>>wild[0].hours;
	cout<<"ENTER THE MINUTES OF FIRST TIME PERIOD=";cin>>wild[0].minutes;
	cout<<"ENTER THE HOURS of SECAND TIME PERIOD=";cin>>wild[1].hours;
	cout<<"ENTER THE MINUTES OF SECAND TIME PERIOD=";cin>>wild[1].minutes;
	cout<<"\n\n\t\tACCORDING TO YOUR INPUT YOU HAD ENTER THE FOLLOWING INFORMATION:)";
	cout<<"\n\n\nFIRST TIME PERIOD= "<<wild[0].hours<<"HOURS AND "<<wild[0].minutes<<" MINUTES";
	cout<<"\nSECAND TIME PERIOD= "<<wild[1].hours<<"HOURS AND "<<wild[1].minutes<<" MINUTES";
	int sub1,sub2;
	sub1=wild[0].hours-wild[1].hours;
	sub2=wild[0].minutes-wild[1].minutes;
	if(sub2>=60)
	{
	int night;	
	   night=sub2/60;
	  sub2=sub2%60;
       sub1=sub1+night;
   }
cout<<"\n\n\t\tTIME DIFFERENCE BETWEEEW THESE TWO TIME PERIOD="<<sub1<<" HOURS AND  "<<sub2<<" MINUTES";
cout<<"\n[-----------------------------------------------------------------------------------------]";
cout<<"\n\t\t\t\t\tTHE END:)";
}