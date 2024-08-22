//NAME ABDUL REHMAN
#include<iostream>
using namespace std;

int main()
{
	int r[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"\t\t TAKING INPUT:\t\t"<<endl;
    cout<<"---------"<<endl;
	for(int i=0;i<3;i++)
	{
        
		for(int j=0;j<3;j++)
		{
				cout<<"|"<<r[i][j]<<"|";
		}
		cout<<endl;
	}
    cout<<"---------"<<endl;
	return 0;
}
