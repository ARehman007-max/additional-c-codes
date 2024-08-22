#include<iostream>
using namespace std;
int main()
{
    for(int a=0; a<4; a++)
    {
        for(int s=5; s>a; s--)
            cout<<" ";
        for(int d=0; d<a; d++)
            cout<<" *";
        cout<<endl;
    }
    int f=5;
	int g=1;	
	for(int b =1;b<=f;b++)
	{
		for(int e=1;e<b+1;e++)	
		{
			cout<<" ";
    	}
		for(int c=0;c<f-b;c++)
    	{
			cout<<" *";
		}
		
    	cout<<endl;
}
        return 0;
}
