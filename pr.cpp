#include<iostream>
using namespace std;


main()
{
	cout<<"\t\t\tMETHOD OF FINDING DAYS YOU LIVED IN YOUR LIFE:)"<<endl;
	cout<<"PLEASE ENTER CURRENT DATA:)\n";
	string cdate;
	getline(cin,cdate);
	
	cout<<"PLEASE ENTER DAY OF BIRTH:)\n";
	string dob;
	getline(cin,dob);
	cout << cdate-dob;
	
}