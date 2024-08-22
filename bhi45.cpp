#include<iostream>
using namespace std;
struct student
{
	int rollno;
	char name[15];
	int mark[5];
};
int main()
{
	student wild[10];
	for(int a=0;a<10;a++)
	{
		cout<<"ENTER ROLL NO OF STUDENT"<<a+1<<'=';cin>>wild[a].rollno;
		cout<<"ENTER STUDENT NAME=";cin>>wild[a].name;
		for(int i=0;i<5;i++)
		{
			cout<<"ENTER MARKS OF SUBJECT"<<i+1<<"=";cin>>wild[a].mark[i];
		}
		cout<<endl;
		
	}
}
