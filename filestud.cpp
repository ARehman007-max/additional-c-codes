#include<iostream>
#include<fstream>
using namespace std;
//NAME ABDUL REHMAN
struct student
{
	int id;
	char name[15];
	int marks;
};
int main()
{
	student s1[5];
	ofstream right("qwert1.txt");
	for(int a=0;a<5;a++)
	{
	cout<<"ENTER STUDENT ID"<<a+1<<'=';cin>>s1[a].id;
	cout<<"ENTER STUDENT name"<<a+1<<'=';cin>>s1[a].name;
	cout<<"ENTER STUDENT marks"<<a+1<<'=';cin>>s1[a].marks;
	right<<s1[a].id<<" "<<endl;
		right<<s1[a].name<<" "<<endl;
		right<<s1[a].marks<<" "<<endl;
	}
}