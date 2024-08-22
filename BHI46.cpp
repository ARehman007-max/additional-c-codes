#include<iostream>
using namespace std;
void FIRE(string wild);
int main()
{
	string  wild;
	cout<<"\t\t\t\tSTART PROGRAM:)";
	cout<<"\n__________________________________________________________________________________________________________";
	cout<<"\n\t\t\tPRINTING CNIC NO THROUGH STRING:";
	cout<<"\nENTER THE CNIC:";
	getline(cin,wild);
	FIRE(wild);
}
void FIRE(string wild)
{
	
	int wild_p=0;
	int wild_f=0;
	int wild_g=0;
	int i;
	for( i=0;wild[i]!=45;i++)
	{
		int a=wild[i]-48;
	   wild_p=wild_p*10+a;
    }
	i=i+1;
	     while(wild[i]!=45)
	{
	   int a=wild[i]-48;
		wild_f=wild_f*10+a;
		i++;		
	}
	i=i+1;
	while(i!=wild.size())
	{
	int a=wild[i]-48;
	wild_g=wild_g*10+a;
	i++;
    }
    cout<<"\nNOTE:(1 , 3 , 5 , 7 , 9 )IF ANY NUMBER IN THESE NUMBERS IS PRINTED IN LAST THAT'S MEANS PERSON IS MALE:  ";
    cout<<"\nNOTE:(2 , 4 , 6 , 8  )IF ANY NUMBER IN THESE NUMBERS IS PRINTED IN LAST THAT'S MEANS PERSON IS FEMALE: ";
	cout<<"\nLOCATION DATA ="<<wild_p<<"\nFAMILY DATA="<<wild_f<<"\nGENDER DATA="<<wild_g;

}