#include<iostream>
using namespace std;
int main()
{
 char a;
cout<<"type any word=";
cin>>a;
if(a>='A'&&a<='Z')
cout<<"upper class"<<endl;
else if(a>='a'&&a<='z')
cout<<"lower class;"<<endl;
else
cout<<"incorrect input";


}
