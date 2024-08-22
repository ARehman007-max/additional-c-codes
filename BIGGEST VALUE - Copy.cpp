#include<iostream>
using namespace std;
int main()
{
	int A;
	int B;
	int C;
	cout<<"find the biggest value:"<<endl;
	cout<<"VALUE OF A=";
	cin>>A;
	cout<<"VALUE OF B=";
	cin>>B;
	cout<<"VALUE OF C=";
	cin>>C;
	if (A>B && A>C)
	cout<<"A IS BIGGEST";
	else if(B>A && B>C)
	cout<<"B IS BIGGEST";
	else if(C>A && C>B)
	cout<<"C IS BIGGEST";
	else
	cout<<"A B C ARE EQUALL TO EACH OTHER";
	return 0;
}
