#include <iostream>
using namespace std;
int hcf(int,int);
int main()
 {
  int a,b;
  cout << "ENTER FIRST VALUE=";cin>>a;
  cout<<"ENTER SECAND VALUE=";cin>>b;
  cout<<"HCF OF THESE TWO VALUES ARE="<<hcf(a,b);
 }
int hcf(int i,int j)
{
	int hcf;
	for(int k=1;k<=i && k<=j;k++)
	{
		if(i%k==0 && j%k==0)
		{
			hcf=k;
		}
	}
	return hcf;
}

 
