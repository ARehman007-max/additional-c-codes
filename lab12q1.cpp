#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream alpha("your.txt");
	alpha<<"file is tought but its fun :";
	alpha.close();
	string mytext; 
	ifstream data("your.txt");
	while(getline(data,mytext))
	{
		cout<<mytext;
	}
	data.close();
}