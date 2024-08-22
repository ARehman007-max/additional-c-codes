#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,dig;	
	for(int i=1;i<=500;i++)
	{
	num =i;

	{
	while(num!=0)
	{
	 dig=num%10;
	 num=num/10;
	 dig=dig*dig*dig;	
	 sum=sum+dig;
	}
	
	if(sum==i)
	cout<<i<<" is armstrong\n";
	else 
	cout<<i<<" is not armstrong\n";
}
}
}


