#include<iostream>
using namespace std;
int main()
{
cout<<"\t\t FINd PRIME NO BETWEEN 1 TO 100:\t\t";
	int chk=1;
    
	for(int a=2;a<=100;a++)
	{
	chk=1;
	
	for(int i=2;i<a;i++)
	{
	
	
	if(a%i==0)
	{
	chk=0;
	break;
	} 
}

    if(chk==0)	
	cout<<a<<"=number is prime"<<endl;
    else(chk!=0);
    cout<<a<<"=number is not prime"<<endl;
    }
    
    return 0;
    }


