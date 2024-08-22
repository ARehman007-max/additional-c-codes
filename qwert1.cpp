#include<iostream>
#include<fstream>
using namespace std;
void city(string);
int main()
{
	string q;
	
int i=0;
     	ifstream pak("qwert.txt");
    while(pak>>q)
	      {
       if(q[0]=='d')
	       cout<<q<<endl;
	      i++;  	
	    }

    }
    