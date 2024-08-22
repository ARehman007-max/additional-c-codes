#include<iostream>
using namespace std;
int main()
{
	int  A,DISTANCE=0;
	cout<<"\t\t\tFIND THE DISTANCE BETWEEN TO POINT:\t\t\t ";
	cout<<"\n\n\tENTER THE LIMITE OF ARRAY=";cin>>A;
	int G[A];
	for(int i=0;i<A;i++)
	{
		cout<<"\t\tENTER VALUE"<<i+1<<'=';cin>>G[i];
	}
	cout<<endl;
	cout<<"\n\t\tFIND DISTACE:";
	int k,l;
	cout<<"\nENTER FIRST VALUE=";cin>>k;
	cout<<"ENTER SECAND VALUE=";cin>>l;
	cout<<"\n\nFIND DISTANCE BETWEEN FIRST AND SECAND POINTS:";
	int INDEX1,INDEX2;
	for(int m=0;m<A;m++)
    {
    	if(k==G[m])
    	{
		cout<<"\nVALUE OF K="<<G[m]<<endl;
		INDEX1=m+1;
		cout<<"INDEX1="<<INDEX1;
        }
        else if(l==G[m])
	    {
	    	cout<<"\nVALUE OF L="<<G[m]<<endl;
	    	INDEX2=m+1;
	    	cout<<"INDEX2="<<INDEX2;
		}
       
	}
	DISTANCE=INDEX1-INDEX2;	    
	    cout<<"\n\n\t\tDISTANCE BETWEEN TWO POINTS:="<<DISTANCE;
}
