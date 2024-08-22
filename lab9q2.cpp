#include<iostream>
using namespace std;
struct hieght
{
	int foat;
	int inch;
};
int main()
{
	
	hieght feet[2];
	cout <<"ENTER THE FIRST DISTANCE in FOAT=";cin>>feet[0].foat;
	cout<<"ENTER THE FIRST DISTANCE IN INCH=";cin>>feet[0].inch;
	cout <<"ENTER THE SECAND DISTANCE in FOAT=";cin>>feet[1].foat;
	cout<<"ENTER THE SECAND DISTANCE IN INCH=";cin>>feet[1].inch;
	cout<<"FIRST DISTANCE="<<feet[0].foat<<"FEETS AND"<<" "<<feet[0].inch<<"inches";
	cout<<"\nSECAND DISTANCE="<<feet[1].foat<<"FEETS AND"<<" "<<feet[1].inch<<"inches";
	int sum1,sum2;
	sum2=feet[0].inch+feet[1].inch;
	sum1=feet[0].foat+feet[1].foat;
	if(sum2>=12)
	{
	int wild=0;	
	   wild=sum2/12;
	  sum2=sum2%12;
       sum1=sum1+wild;
     
	}
	
	cout<<"\nSUM THESE TWO DISTANCES="<<sum1<<"."<<sum2;
}
