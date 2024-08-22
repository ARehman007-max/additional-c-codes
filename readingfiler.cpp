#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int b[5];

	ifstream input("abc.txt");
	int i=0;
	
	while(input>>b[i])
	{
	
	cout<<" b = "<<b[i]<<endl;
	i++;
 }

}
