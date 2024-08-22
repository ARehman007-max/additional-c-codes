#include<iostream>
#include<fstream>
using namespace std;
//NAME ABDUL REHMAN
struct wild
{
	int id;
	char name[15];
	int marks;
};
int main()
{
	wild a1[5];
	ifstream des("qwert1.txt");
	int i=0;
	while(!(des.eof()))
	{
		
	    des>>a1[i].id;
	    des>>a1[i].name;
	    des>>a1[i].marks;
	cout<<"ENTER STUDENT ID"<<'='<<a1[i].id<<" "<<endl;
	cout<<"ENTER STUDENT name"<<'='<<a1[i].name<<" "<<endl;
	cout<<"ENTER STUDENT marks"<<'='<<a1[i].marks<<" "<<endl;
    
	}
	
	
	
		
	
	
	
	
}