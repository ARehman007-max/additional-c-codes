#include<iostream>
using namespace std;
int main()
{
int sec ,hour,min;
cout<<"ENTER THE TOTAL SECANDS=";cin>>sec;
hour=sec/3600;
cout<<"HOUR="<<hour<<endl;
hour=sec%3600;
min=hour/60;
cout<<"MINUTES="<<min<<endl;
min=hour%60;
sec=min%60;
cout<<"secands="<<sec<<endl;
 return 0;
}

