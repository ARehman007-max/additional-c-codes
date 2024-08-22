#include<iostream>
#include<fstream>
using namespace std;
struct account
{
	char name[16];
	char passward[16];
	char gender;
	int amount;
}pak[20];
struct admin
       {
       string id;
	   string pasward;	
       };
       
//void admin1();
//void admineuse(struct);
//void usermenu();
//void intromenu();
void mainmenu();
int cuscount=0;
int main()

{
	//	account pak;
		cout<<"\t\t\tBANK MANAGEMENT SYSTEM:\t\t";
		cout<<"**********************************************************************************************************************";
        mainmenu();
}
void mainmenu()
{
	int op;
	     cout<<"\n\t\tYOU HAVE THREE OPTIONs:";
        cout<<"\nPLEASE ENTER 1 FOR create ACCOUNT:";
        cout<<"\nPLEASE ENTER 2 FOR CREATE ACCOUNT:";
        cout<<"\nPLEASE ENTER 3 FOR QUIT :";
        cout<<"\n\t\tPLEASE HELP US BY ENTERING YOUR OPTION=";cin>>op;
       // ofstream wild("PRESENTATION.txt ");
        if(op==1)
        {
        	ofstream wild("bank1.txt",ios::app);
        	cout<<"\n\t\tTHANKS FOR MAKING ACCOUNT IN OUR BANK:)\nPLEASE GIVE THE FOLLOWING INFORMATION";
        
		cout<<"\nPLEASE ENTER YOUR NAME =";cin>>pak[cuscount].name;
        cout<<"PLEASE ENTER YOUR ID =";cin>>pak[cuscount].passward;
        cout<<"PLEASE ENTER YOUR GENDER =";cin>>pak[cuscount].gender;
        cout<<"PLEASE ENTER YOUR AMOUNT=";cin>>pak[cuscount].amount;
       		wild<<pak[cuscount].name<<" ";
       		wild<<pak[cuscount].passward<<" ";
    		wild<<pak[cuscount].gender<<" ";
			wild<<pak[cuscount].amount<<endl
			;   
			cuscount++;   	
		}
		/*if(op==2)
		{
        	ofstream wild("PRESENTATION.txt");
        	account paki;
        	cout<<"\n\t\tTHANKS FOR MAKING ACCOUNT IN OUR BANK:)\nPLEASE GIVE THE FOLLOWING INFORMATION";
        	cout<<"\n\tIN ORDER TO CREATE YOUR ACCOUNT YOU SHOULD ENTER FOLLOWING DATA";
            cout<<"\nPLEASE ENTER YOUR NAME = ";cin>>paki.name;
            cout<<"PLEASE ENTER YOUR ID = ";cin>>paki.passward;
            cout<<"PLEASE ENTER YOUR GENDER = ";cin>>paki.gender;
        	if(paki.name==pak[cuscount].name && paki.passward==pak[cuscount].passward && paki.gender==pak[cuscount].gender)
        	{
        	usermenu ();
            }
            else 
        	{
        		cout<<"OPPS!\t\tINVALID INFORMATION PLEASE ENTER AGAIN";
            }
		    }
            if(op==3)
            {
            	intromenu();
			}*/
}

