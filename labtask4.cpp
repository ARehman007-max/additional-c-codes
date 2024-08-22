#include<iostream>
using namespace std;
int main()
{
	int num,sum,dig1;
	
	for(int i=1;i<=num;)
	{
		sum=0;
	num =i;
	while(num!=0)
	{
	 dig1=num%10;
	 num=num/10;
	 dig1=dig1*dig1*dig1;	
	 sum=sum+dig1;
	}
	
	if(sum==i)
	cout<<i<<" is armstrong\n";
	else 
	cout<<i<<" is not armstrong\n";
}
}
