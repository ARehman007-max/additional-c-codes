#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a[5] ;
		ofstream save("abc.txt");
	for(int i=0;i<5;i++)
	{
		cout<<"enter data"<<i<<"=";cin>>a[i];
	
	    save<<a[i]<<" ";
	}
	
}
