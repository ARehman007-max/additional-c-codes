 #include<iostream>
 using namespace std;
 int WILD(int)
 {
 	
 int sum,count=0;
 cout << "\n\n\t\t:)Find the Perfect numbers and number of Perfect numbers between 1 to 1000:)\n";
cout << "\n\nThe Perfect numbers are:(\n\n ";
for(int i=1;i<1000;i++)
{
sum=0;
	for(int j=1;j<i;j++)
	{
      if(i%j==0 )
      sum=sum+j;
    }                              											  					                              
   if(sum==i)
   {
   count++;    
    cout<<"\t\t"<<i<<" is a Perfect number:)"<<"\n";
   }
   }
cout<<"\n\n\t\tTOTAL Number of Perfect numbers between 1 to 1000 ARE: "<<count<<":)\n";
}
int main()
{
	int a;
	WILD(a);
}

