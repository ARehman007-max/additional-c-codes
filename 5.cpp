#include<iostream>
using namespace std;
int main()
{
	int centi, kel,faher,op;
	cout<<"\t\tMETHOD TO CONVERT CENTIGRATE  INTO KELVIN OR FAHRENHITE:\t\t";
	cout<<"\nENTER ANY NUMBER FOR CENTIGRATE=";cin>>centi;
	cout<<"\n\t\tCHOOSE THE FOLLOWING OPTION:";
	cout<<"\nENTER 1 FOR CENTIGRATE INTO KELVIN";
	cout<<"\nENTER 2 FOR CENTIGRATE INTO FAHRENHITE"<<endl;
	cin>>op;
	if(op==1)
	{
		kel=centi+273;
		cout<<"CENTIGRATE INTO KELVIN="<<kel;
	}
	else if (op==2)
	{
		faher=9/5*(centi+32);
		cout<<"CENTIGRATE INTO FAHRENHITE="<<faher;
	}
	else
	cout<<"OPPS! WRONG INFORMATION";
	return 0;
}
