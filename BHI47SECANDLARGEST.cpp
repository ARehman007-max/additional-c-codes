#include<iostream>
using namespace std;
int main()
{
	int n, FIRST, SECAND;
   cout<<"Enter SIZE OF Array Elements: ";cin>>n;
   int array[n];
   
   for(int i=0; i<n; i++)
   {
   
      cin>>array[i];
}
FIRST = array[0];
   for(int i=0; i<n; i++)
   {
      if(FIRST<array[i])
         FIRST= array[i];
   }
   cout<<"\nLARGEST NO ="<<FIRST;
   SECAND = array[0];
   for(int i=0; i<n; i++)
   {
      if(SECAND<array[i])
      {
         if(array[i]!=FIRST)
            SECAND= array[i];
      }
   }
   cout<<"\nSecond Largest Element = "<<SECAND;
}
   
   //cout<<endl;


