#include<iostream>
using namespace std;
int main()
{
	int kel,fahren,A,op;
	cout<<"\t\t\tCONVERTION OF DIFFERENT TEMPERTURE:\t\t\t";
	cout<<"\n\nENTER THE VaLUE OF CENTIGRATE=";cin>>A;
	cout<<"\n\nPRESS 1 FOR CENTIGRATE INTO KELVIN:";
	cout<<"\nPRESS 2 FOR CENTIGRATE INTO FAHRENHITE:"<<endl;
	cout<<"ENTER YOUR OPSITION=";
	cin>>op;
	
	switch(op)
	{
	case 1:
	kel=A+273;
	cout<<"\nKELVIN VALUE ="<<kel;
	break;
	case 2:
	fahren=(A*9/5)+32;
	cout<<"\nFAHRENHITE VALUE="<<fahren;
	break;
}
	return 0;
}
