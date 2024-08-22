#include<iostream>
using namespace std;
void call(int,char,int);
int main()
{
	int a,b;
	char c;
	cout<<"\t\tEASY WAY TO BUILT CALCULATOR:\t\t";
	cout<<"\n\nENTER FIRST VALUE=";cin>>a;
	cout<<"ENTER secand VALUE=";cin>>b;
    cout<<"ENTER EXPRESSION=";cin>>c;
	call(a,c,b);	
}
void call(int i,char k,int j)
{
	switch(k)
	{
	case'+':
	cout<<"USER WANT SUM BETWEEN THESE TWO NUMBER="<<i<<'+'<<j<<'='<<i+j;
	break;
	case'-':
	cout<<"USER WANT SUBTRACT BETWEEN THESE TWO NUMBER="<<i<<'-'<<j<<'='<<i-j;
	break;
	case'*':
	cout<<"USER WANT MULTIPLY BETWEEN THESE TWO NUMBER="<<i<<'*'<<j<<'='<<i*j;
	break;
	case'/':
	cout<<"USER WANT DIVIDE BETWEEN THESE TWO NUMBER="<<i<<'/'<<j<<'='<<i/j;
	break;
	default:
	cout<<"WRONG INPUT";
    }
}
