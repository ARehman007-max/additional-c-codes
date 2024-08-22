#include<iostream>
using namespace std;
void perfect()
{
	int sum,count=0;
	cout<<"enter number from 1 ro";
	cout<<"\nnumber of perfect";
	for(int i=1;i<1000;i++)
	{
		sum=0;
		for(int j=1;j<=i;j++)
		{
			
			if(i%j==0)
			
				sum=sum+j;
			}
			if(sum==i)
			{
				count++;
				cout<<i<<"is perfecr num"<<endl;
			}	
		    }
		cout<<"\nno. of perfect no."<<count;
	}
	
int main(){
	
	
	 perfect();
	
	
	
	
	
}