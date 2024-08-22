//AFTER MID 1 TASK
#include<iostream>
using namespace std;
int main()
{
	//ABDUL REHMAN
	int i,j; //FIRST ARRAY FOR SUM
	cout<<"\t\tENTER FIRST ARRAY:\t\t"; 
	cout<<"\nENTER THE  NO OF ROWS=";cin>>i;
	cout<<"ENTER THE NO OF COLUMN=";cin>>j;
	int r[i][j];
    for(int c=0;c<i;c++)
    {
    	for(int d=0;d<j;d++)
    	{
    		cin>>r[c][d];
		}
		cout<<endl;
	}
	for(int e=0;e<i;e++)
    {
    	for(int f=0;f<j;f++)
    	{
    		cout<<r[e][f]<<" ";
		}
		cout<<endl;
	}
	 //SECAND ARRAY FOR SUM 
	 int Q[i][j];
	 cout<<"\t\tSECAND VALUE OF AN ARRAY:\t\t";
	cout<<"\nENTER THE  NO OF ROWS=";cin>>i;
	cout<<"ENTER THE NO OF COLUMN=";cin>>j;
    for(int c=0;c<i;c++)
    {
    	for(int d=0;d<j;d++)
    	{
    		cin>>Q[c][d];
		}
		cout<<endl;
	}
	for(int e=0;e<i;e++)
    {
    	for(int f=0;f<j;f++)
    	{
    		cout<<Q[e][f]<<" ";
    		
		}
		cout<<endl;
	}
	
	int sum[i][j];
	cout<<"\t\tSUM BETWEEN TWO METRIC:\t\t";
	for(int e=0;e<i;e++)
    {
    	for(int f=0;f<j;f++)
    	{
    		sum[e][f]=r[e][f]+Q[e][f];
    		cout<<sum[e][f]<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
