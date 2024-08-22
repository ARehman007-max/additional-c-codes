#include<iostream>
using namespace std;
struct student
{
	int rollno;
	char name[15];
	int mark[5];
	float avg=0;
};
int main()
{
	student s1;
	cout<<"ENTER STUDENT ROLL NO=";cin>>s1.rollno;
	cout<<"ENTER STUDENT NAME=";cin>>s1.name;
	for(int a=0;a<5;a++)
	{
		cout<<"ENTER MARK OF SUBJECT"<<a+1<<"=";
		cin>>s1.mark[a];
	}
	cout<<endl;
	s1.avg=(s1.mark[0]+s1.mark[1]+s1.mark[2]+s1.mark[3]+s1.mark[4])/5.0;
	cout<<"AVERAGE OF STUDENT 1="<<s1.avg;
}
