#include<iostream>
using namespace std;
int main()
{
	int a,sum=0;
	cout<<"FIND THE NO AND SUM OF ALL INTEGER BETWEEN 1324 TO 8983 DIVISBLE BY 6:";
 for(a=1324;a<8983;a++)
 {
 if(a%6==0)
{
	cout<<" "<<a;
	sum=sum+a;
	}	
}
cout<<"\nTHE SUM:"<<sum<<endl;
}
