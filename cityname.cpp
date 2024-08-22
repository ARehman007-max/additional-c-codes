//MUSSA 
#include<iostream>
#include<fstream>
using namespace std;
void city()
{
	string s1;
	ofstream WILD("qwert.txt");
    for(int a=0;a<5;a++)
    {
		cout<<"enter city name=";getline(cin,s1);
	    WILD<<s1<<" ";
	}
	WILD.close();
    }

main()
{
	
	city();
}
