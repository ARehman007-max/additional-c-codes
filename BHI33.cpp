#include<iostream>
using namespace std;
int sum(int a,int b);
int sum(int i, int j)
{
	int s;
	//cout<<"\nSUM OF TWO NO="<<i<<'+'<<j<<'='<<i+j;
	s= i+j;
	return s;
}
int main()
{	 
    int a,c;
    cout<<"FIRST VALUE IS EQUALL=";cin>>a;
    int b;
     cout<<"secand VALUE IS EQUALL=";cin>>b;
	c=sum(a,b);
	cout<<c+10;
	
    
}

