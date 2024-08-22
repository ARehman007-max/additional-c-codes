//NAME TALHA
#include<iostream>
using namespace std;
int main()
//LAB3 TASK4
{int a;
cout<<"enter no for day=";
cin>>a;
cout<<"ENTER 1 FOR MONDAY"<<endl;
cout<<"ENTER 2 FOR tuesday"<<endl;
cout<<"ENTER 3 FOR wednesday"<<endl;
cout<<"ENTER 4 FOR thursday"<<endl;
cout<<"ENTER 5 FOR friday"<<endl;
cout<<"ENTER 6 FOR saturday"<<endl;
cout<<"ENTER 7 FOR sunday"<<endl;
switch(a)
{
	case 1:
	cout<<"monday";
	break;
	case 2:
    cout<<"tuesday";
    break;
    case 3:
    cout<<"wednesday";
    break;
    case 4:
    cout<<"thursday";
    break;
    case 5:
    cout<<"friday";
    break;
    case 6:
    cout<<"saturday";
    break;
    case 7:
    cout<<"sunday";
    break;
    default:
    cout<<"wrong information";
}
return 0;
}
