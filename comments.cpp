//NAME talha
#include<iostream>
using namespace std;
int main()
// LAB 3  TASK 5
{
	char op;
	cout<<"result card:"<<endl; 

	cout<<"press A for excellent:"<<endl;
	cout<<"press B for GOOD:"<<endl;
    cout<<"press C for NORMAL:"<<endl;
    cout<<"press D for NOT GOOD:"<<endl;
    cout<<"press E for BAD:"<<endl;
    cin>>op;
    switch(op)
    {
	case'A':
    cout<<"EXCELLLENT:";
    break ;
    case 'B':
    cout<<"GOOD";
    break;
	case 'C':
    cout<<"NORMAL";
    break;
	case 'D':
    cout<<"NOT good";
    break;
	case 'E':
    cout<<"BAD";
    break;
    default:
    cout<<"wrong info";
	}
return 0;
}
