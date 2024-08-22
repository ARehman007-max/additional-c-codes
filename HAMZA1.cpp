#include<iostream>
 using namespace std;
 int perfect(int )
 //HAMZA Q1
 {
 int i=1, u=1, sum=0,ctr=0;
 cout << "\n\n Find the Perfect numbers and number of Perfect numbers between 1 to 1000:\n";
 cout << "------------------------------------------------------------------------------\n";
cout << "The Perfect numbers are : \n";
   while(i<=1000)
 {                                 
   while(u<=1000)
   {                              
     if(u<i)
     {
      if(i%u==0 )
      sum=sum+u;
     }                         
     u++;
   }                           
   if(sum==i)
   {
       ctr++;
    cout<<i<<" is a Perfect number."<<"\n";
   }
   i++;
   u=1;  sum=0;
 } 
     cout<<"Number of Perfect numbers between 1 to 1000 is: "<<ctr<<"\n";
}
int main(){
	int a;
	perfect(a);
}
